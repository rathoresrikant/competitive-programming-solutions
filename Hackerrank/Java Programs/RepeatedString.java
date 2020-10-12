import java.io.*;
import java.math.*;
import java.security.*;
import java.text.*;
import java.util.*;
import java.util.concurrent.*;
import java.util.regex.*;

public class RepeatedString {

    // Complete the repeatedString function below.
    static long repeatedString(String s, long n) {

        HashMap<Character,Integer> hmap = new HashMap<>();
        for(int i=0; i<s.length(); i++)
        {
            if(!hmap.containsKey(s.charAt(i)))
            {
                hmap.put(s.charAt(i), 1);
            }
            else
            {
                hmap.put(s.charAt(i), hmap.get(s.charAt(i))+1);
            }
        }

        long count =0;
        for(int i=0; i<(n%s.length()); i++)
        {
            if(s.charAt(i)=='a')
            {
                count++;
            }
        }
        if(hmap.containsKey('a'))
        {
        long res = (n/s.length())*hmap.get('a')+count;   
        return res;
        }
        
        return 0;


    }

    private static final Scanner scanner = new Scanner(System.in);

    public static void main(String[] args) throws IOException {
        BufferedWriter bufferedWriter = new BufferedWriter(new FileWriter(System.getenv("OUTPUT_PATH")));

        String s = scanner.nextLine();

        long n = scanner.nextLong();
        scanner.skip("(\r\n|[\n\r\u2028\u2029\u0085])?");

        long result = repeatedString(s, n);

        bufferedWriter.write(String.valueOf(result));
        bufferedWriter.newLine();

        bufferedWriter.close();

        scanner.close();
    }
}
