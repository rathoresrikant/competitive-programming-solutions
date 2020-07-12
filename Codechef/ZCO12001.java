import java.util.*;

public class ZCO12001 {
  public static void main (String [] args) {
    Scanner input = new Scanner(System.in);
    int N = input.nextInt();
    int temp,depth,depthPos,max,maxPos,currMax,currMaxPos;
    depth = 0;
    depthPos=0;
    currMax=0;
    currMaxPos=0;
    max=0;
    maxPos=0;
    int counter=0;
    for (int i = 0 ; i < N ; i++) {
      temp = input.nextInt();
      if (temp == 1) {
        counter++;
        if (counter > depth) {
          depth = counter; depthPos = i;
        }
        if (counter > 1) currMax++;
        else {
          currMax = 0;
          currMaxPos = i ; 
        }
      }
      else {
        counter--;
        if (counter > 0) currMax++;
        else {
          if(currMax > max) {
            max = currMax;
            maxPos = currMaxPos;
          }
          currMax = 0; currMaxPos = 0;
        }
      }
    }
    System.out.println(depth + " " + (depthPos+1) + " " + (max+2)+ " " + (maxPos+1));
  }
}
