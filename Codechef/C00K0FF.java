import java.util.*;

public class C00K0FF {
	public static void main(String [] args) {
		Scanner input = new Scanner(System.in);
		String []store = new String[7];
		store[0] = "cakewalk";
		store[1] = "simple";
		store[2] = "easy";
		store[3] = "easy-medium";
		store[4] = "medium";
		store[5] = "medium-hard";
		store[6] = "hard";
		//int []check = new int[7];
		int T = input.nextInt();
		for (int i = 0 ; i < T ; i++) {
			int N;
			N=input.nextInt();
			int []check = new int[7];
			for (int j = 0 ; j < N ; j++) {
				String current = input.next();
				for (int k = 0 ; k < 7 ; k++) {if (current.equals(store[k])) check[k]++;}
			}
				if (check[0] > 0 & check[1] > 0 & check[2] > 0 & (check[3] > 0 | check[4] > 0) & (check[5] > 0 | check[6] > 0)) System.out.println("Yes");
				else System.out.println("No");

			
		}
	}
}
