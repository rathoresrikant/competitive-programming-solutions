#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the timeConversion function below.
 */
string timeConversion(string s) 
{
    int l=s.length();
    for(int i=0;i<=l; i++)
    {
        int h1=(int)s[0];
        int h2=(int)s[1];
        int hh=(h1*10+h2%10);
        if(s[8]=='A')
        {
            if(s[0]=='1' && s[1]=='2')
            {
                s[0]='0';
                s[1]='0';
            }
            s[8]=' ';
            s[9]=' ';
        }
        else if(s[8]=='P')
        {
              
                if(s[0]=='0' && s[1]=='1')
                {
                    s[0]='1';
                    s[1]='3';
                }
            else if(s[0]=='0' && s[1]=='2')
                {
                    s[0]='1';
                    s[1]='4';
                }
            else if(s[0]=='0' && s[1]=='3')
                {
                    s[0]='1';
                    s[1]='5';
                }
             else if(s[0]=='0' && s[1]=='4')
                {
                    s[0]='1';
                    s[1]='6';
                }
             else if(s[0]=='0' && s[1]=='5')
                {
                    s[0]='1';
                    s[1]='7';
                }
             else if(s[0]=='0' && s[1]=='6')
                {
                    s[0]='1';
                    s[1]='8';
                }
             else if(s[0]=='0' && s[1]=='7')
                {
                    s[0]='1';
                    s[1]='9';
                }
             else if(s[0]=='0' && s[1]=='8')
                {
                    s[0]='2';
                    s[1]='0';
                }
            else if(s[0]=='0' && s[1]=='9')
            {
                s[0]='2';
                s[1]='1';
            }
             else if(s[0]=='1'&& s[1]=='0')
                {
                    s[0]='2';
                    s[1]='2';
                }
             else if(s[0]=='1'&& s[1]=='1')
                {
                    s[0]='2';
                    s[1]='3';
                }
             else 
                {
                    s[0]='1';
                    s[1]='2';
                } 
                    s[8]=' ';
                    s[9]=' ';
            }
        }
    return s;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string result = timeConversion(s);

    fout << result << "\n";

    fout.close();

    return 0;
}
