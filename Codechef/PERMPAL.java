import java.util.*;
import java.io.*;

public class PERMPAL {
	public static void go(String str) {
		ArrayList <Character> string = new ArrayList <Character>(str.length());
		ArrayList <Integer> indexes = new ArrayList <Integer>(str.length());
		for (int i = 0 ; i < str.length() ; i++) {
			string.add(str.charAt(i));
			indexes.add(i);
		}
		ArrayList <Integer> firstHalf = new ArrayList <Integer>(str.length()/2);
		ArrayList <Integer> secondHalf = new ArrayList <Integer>(str.length()/2);

		int aloneCharacters = 0;
		Character aloneCharacter = ' ';
		int aloneCharacterIndex = -1;
		while (!string.isEmpty()) {
			Character characterRemoved = string.get(0);
			string.remove(0);
			int indexRemoved = indexes.get(0);
			indexes.remove(0);
			int search = string.indexOf(characterRemoved);
			if (search < 0) {
				aloneCharacter = characterRemoved;
				aloneCharacterIndex = indexRemoved;
				aloneCharacters++;
				if (aloneCharacters > 1) {
					System.out.println(-1);
					return;
				}
				continue;
			}
			string.remove(search);
			int searchIndex = indexes.get(search);
			indexes.remove(search);
			firstHalf.add(indexRemoved);
			secondHalf.add(searchIndex);
		}

		Collections.reverse(secondHalf);
		StringBuilder output = new StringBuilder("");
		for (Integer i : firstHalf) output.append(Integer.toString(i+1) + " ");
		if (aloneCharacterIndex != -1) output.append(Integer.toString(aloneCharacterIndex+1) + " ");
		for (Integer i : secondHalf) output.append(Integer.toString(i+1) + " ");
		System.out.println(output);
	}
	public static void main(String [] args) {
		Scanner input = new Scanner(System.in);
		int T = input.nextInt();
		while (T-- > 0) {
			String str = input.next();
			go(str);
		}
	}

	public static PrintWriter out;

	public static class MyScanner {
		BufferedReader br;
		StringTokenizer st;

		public MyScanner() {
			br = new BufferedReader(new InputStreamReader(System.in));
		}

		String next() {
			while (st == null || !st.hasMoreElements()) {
				try {
					st = new StringTokenizer(br.readLine());
				} catch (IOException e) {
					e.printStackTrace();
				}
			}
			return st.nextToken();
		}

		int nextInt() {
			return Integer.parseInt(next());
		}

		long nextLong() {
			return Long.parseLong(next());
		}

		double nextDouble() {
			return Double.parseDouble(next());
		}

		String nextLine() {
			String str = "";
			try {
				str = br.readLine();
			} catch (IOException e){
				e.printStackTrace();
			}
			return str;
		}
	}
}
