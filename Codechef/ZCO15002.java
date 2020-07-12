import java.util.*;

public class ZCO15002 {
  public static void main(String [] args) {
    Scanner input = new Scanner(System.in);
    int N = input.nextInt();
    int K = input.nextInt();
    int []arr = new int[N];
    for (int i = 0 ; i < arr.length ; i++) {
      arr[i] = input.nextInt();
    }
    int counter = 0;
    Arrays.sort(arr);
    System.out.println(Arrays.binarySearch(arr,arr[0]+K));
    for (int j = 0 ; j < arr.length ; j++) {
      if (Arrays.binarySearch(arr,arr[j]+K) >= 0) counter++;
      else if (Arrays.binarySearch(arr,arr[j]-K) >= 0) counter++;
    }
    System.out.println(counter);
  }
}
