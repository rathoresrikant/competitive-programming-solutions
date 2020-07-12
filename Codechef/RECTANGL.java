import java.util.*;

public class RECTANGL {
	public static void main(String [] args) {
		Scanner input = new Scanner(System.in);
		int T = input.nextInt();
		while (T-- > 0) {
			boolean isRectangle = true;
			ArrayList<Integer> sides = new ArrayList<Integer>();
			for (int i = 0 ; i < 4 ; i++) {
				sides.add(input.nextInt());
			}
			for (int i = 0 ; i < sides.size() ; i++) {
				Integer toDelete = sides.get(i);
				sides.remove(i);
				if (sides.contains(toDelete)) {
					sides.remove(sides.indexOf(toDelete));
				}
				else {
					isRectangle = false;
					break;
				}
			}
			if (isRectangle) System.out.println("YES");
			else System.out.println("NO");
		}
	}
}
