// Problem link: https://www.codechef.com/problems/ONP

import java.util.Scanner;
import java.util.Stack;

 class smallFactorial {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner input = new Scanner(System.in);
		 
		   int p = input.nextInt();
		    for(int s=0;s<p;s++){
		        Stack<Character> stack = new Stack<Character>();
		        String exp = input.next();
		        int len = exp.length();
		        String result = "";
		        for(int i=0; i<len; i++){
		            char str = exp.charAt(i);
		            if(str>=97 && str<=122){
		                result += str;
		            }
		            else if(str==41){
		                while(!stack.isEmpty() && stack.peek()!='('){
		                    result += stack.pop();
		                }
		                stack.pop();
		            } else {
		                stack.push(str);
		            }
		        }
		        
		        
		        System.out.println(result);
		     }
}
}
