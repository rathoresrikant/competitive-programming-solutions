import java.util.*;

public class BUGCAL {
	public static void main(String [] args) {
		Scanner input = new Scanner(System.in);
		int T = input.nextInt();
		while (T-- > 0) {
			long a = input.nextLong();
			long b = input.nextLong();
			String sum = "";
			while (a > 0 | b > 0) {
				long tempA = a%10;
				long tempB = b%10;
				sum = Long.toString((tempA+tempB)%10) + sum;
				a /= 10;
				b /= 10;
			}
			System.out.println(Long.parseLong(sum));
		}
	}
}
