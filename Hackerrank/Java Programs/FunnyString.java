import java.io.*;
import java.math.*;
import java.security.*;
import java.text.*;
import java.util.*;
import java.util.concurrent.*;
import java.util.regex.*;

public class FunnyString {

    // Complete the funnyString function below.
    static String funnyString(String s) {

      StringBuilder r = new StringBuilder();
      r.append(s);
      r.reverse();
      String res="Not Funny";

      for(int i=0; i<s.length()-1; i++)
      {
          if(Math.abs((int)s.charAt(i+1)-(int)s.charAt(i))==Math.abs((int)r.charAt(i+1)-(int)r.charAt(i)))
          {
             res="Funny";
          }
          else
          {
              res="Not Funny";
              break;
          }
      }

      return res;

    }

    private static final Scanner scanner = new Scanner(System.in);

    public static void main(String[] args) throws IOException {
        BufferedWriter bufferedWriter = new BufferedWriter(new FileWriter(System.getenv("OUTPUT_PATH")));

        int q = scanner.nextInt();
        scanner.skip("(\r\n|[\n\r\u2028\u2029\u0085])?");

        for (int qItr = 0; qItr < q; qItr++) {
            String s = scanner.nextLine();

            String result = funnyString(s);

            bufferedWriter.write(result);
            bufferedWriter.newLine();
        }

        bufferedWriter.close();

        scanner.close();
    }
}
