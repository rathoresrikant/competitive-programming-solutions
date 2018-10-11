#include <iostream>
#include <string>
using namespace std;

string countAndSay(int n)
{
    string str = "1";
    int count = 1;
    for (int i = 1; i < n; i++)
    {
        string tmp = "";
        for (int j = 1; j <= str.length(); j++)
        {
            if (str[j] != str[j -1])
            {
                tmp += '0' + count;
                tmp += str[j-1];
                count = 1;
            }
            else
                count++;
        }
        // str+='\0';
        str = tmp;
    }
    return str;
}

int main()
{
    int n = 5;
    string a = countAndSay(n);
    cout << a;
    return 0;
}