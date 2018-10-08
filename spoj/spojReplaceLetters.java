import java.util.*;
import java.lang.*;

class Main
{
	public static void main (String[] args) throws java.lang.Exception
	{
	Scanner s = new Scanner(System.in);
		String str = s.nextLine();
		char a = s.next().charAt(0);
		char b = s.next().charAt(0);
		str = str.replace(a, b);

		System.out.println(str);

		s.close();
	}
}
