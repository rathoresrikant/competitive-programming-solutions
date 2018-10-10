import java.util.*;

public class TWEED {
	public static void main(String [] args) {
		Scanner input = new Scanner(System.in);
		int T = input.nextInt();
		while (T-- > 0) {
			int N = input.nextInt();
			ArrayList<Integer> heap = new ArrayList<Integer>();
			String currPerson = input.next();
			for (int i = 0 ; i < N; i++) {
				heap.add(input.nextInt());
			}
			//Dee can take out even numbers;
			//Dum can take out odd numbers;
			boolean flag = false;
			while (heap.size()>1) {
				System.out.println(heap);
				if (currPerson.equals("Dee")) {
					for (int i = 0 ; i < heap.size() ; i++) {
						if (heap.get(i)%2 == 0) {
							heap.remove(i);
						}
						else heap.set(i,1);
					}
					currPerson = "Dum";
				}
				else if (currPerson.equals("Dum")) {
					for (int i = 0 ; i < heap.size() ; i++) {
						if (heap.get(i)%2 == 1) {
							heap.remove(i);
						}
						else heap.set(i,1);
					}
					currPerson = "Dee";
				}
			}
			if (currPerson.equals("Dum")) currPerson = "Dee";
			else currPerson = "Dum";
			System.out.println(heap);
			if (currPerson.equals("Dee")) {
				if (heap.get(0)%2 == 0) {
					System.out.println("Dee wins");
				}
				else System.out.println("Dum wins");
			}
			else {
				if (heap.get(0)%2 == 1) {
					System.out.println("Dum wins");
				}
				else System.out.println("Dee wins");
			}
		}
	}
}
