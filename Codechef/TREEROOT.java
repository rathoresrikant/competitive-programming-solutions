import java.util.*;
public class TREEROOT {
	public static void main(String arg[]){	
		Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        while(t-->0){
            int n = sc.nextInt();
            int sum = 0;
            for(int i=0;i<n;i++){
                int id = sc.nextInt(), sumOfChildrenIds = sc.nextInt();
                sum += id - sumOfChildrenIds;
            }
            System.out.println(sum);
        }
	}
}