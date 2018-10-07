#include <bits/stdc++.h>

using namespace std;

// Complete the findDigits function below.
int findDigits(int n)
{
        int c=0,r;
        for (int i=n;i!=0;i=i/10)
        {
            r=i%10;
            cout<<r;
            if(r!=0)
            {
                if(n%r==0)
                c++;
            }
        }
     return c;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int t;
    cin >> t;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    for (int t_itr = 0; t_itr < t; t_itr++) {
        int n;
        cin >> n;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        int result = findDigits(n);

        fout << result << "\n";
    }

    fout.close();

    return 0;
}
