/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
 
import java.util.*;
/**
 *
 * @author shadowleaf
 */
public class MULTHREE {
 
    /**
     * @param args the command line arguments
     */
    public static int index(int arr[], int n) {
        for (int i = 0 ; i < arr.length ; i++) {
            if (arr[i] == n) return i;
        }
        return -1;
    }
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int []arr = new int[]{2,4,8,6};
        int T = input.nextInt();
        while (T-- > 0) {
        long K = input.nextLong();
            int d_zero = input.nextInt();
            int d_one = input.nextInt();
            int sum = (d_zero+d_one)%10;
            int first = (sum*2)%10;
            long S = ((K - 2) % 4L) - 1;
            int newSum = 0;
            int j = index(arr, first);
            if (d_one==0) {
                long uniSum = sum*(K-1);
                if (uniSum%3==0) System.out.println("YES");
                else System.out.println("NO");
            }
	    else if ((d_zero+d_one)%5==0) {
	    	if ((d_zero+d_one)==15 && K <3) System.out.println("YES");
		else System.out.println("NO");
	    }
            else if (sum==0) {
                System.out.println("NO");
            }
            else {
                for (int i = 0 ; i < (int)S ; i++) {
                    if (j>3) j = 0;
                    //System.out.println(j+" "+arr[j]);
                    newSum += arr[j];
                    j++;
                
                }
            
                //int finalSum = newSum + d_zero + d_one + sum;
                int finalSum = newSum + d_zero + d_one + sum + (((int)(K-2))/4)*20;
                //System.out.println(newSum+" " + d_zero+" "+d_one+" "+sum+" "+ (((int)(K-2))/4)*20);
                if (finalSum%3==0) System.out.println("YES");
                else System.out.println("NO");
            }
        }
    }
    
}
