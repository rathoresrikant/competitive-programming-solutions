#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the pageCount function below.
 */
int pageCount(int n, int p) {
    int l,f,t=0,r,left;
    f=p-1;
    
    l=(n-p)-(n%2);
    if(f<=l)
    {  
        r=1;
       left=0;
        while(0==0)
        { 
            if(r==p||left==p)
               break;
            t++;
          left=r+1;
            r=left+1;
        }
     
    }
  else
    {
        if(n%2==0)
        {
            r=0;
            left=n;
        }
      else
      {
          r=n;
          left=n-1;
      }
      while(0==0)
      {
          
            if(r==p||left==p)
               break;
            t++;
          r=left-1;
           left=r-1;;
      }
    }
    return t;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    int p;
    cin >> p;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    int result = pageCount(n, p);

    fout << result << "\n";

    fout.close();

    return 0;
}
