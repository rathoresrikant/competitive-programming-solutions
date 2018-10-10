import java.util.*;

public class POINPOLY {
	public static void main(String [] args) {
		Scanner input = new Scanner(System.in);
		int T = input.nextInt();
		while (T-- > 0) {
			int N = input.nextInt();
			int toFind = N/10;
			int []x = new int[N];
			int []y = new int[N];
			for (int i = 0 ; i < N ; i++) {
				x[i] = input.nextInt();
				y[i] = input.nextInt();
			}
		}
	}
}
