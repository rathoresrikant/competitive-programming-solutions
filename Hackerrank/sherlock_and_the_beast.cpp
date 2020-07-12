#include <bits/stdc++.h>
using namespace std;
string ltrim(const string &);
string rtrim(const string &);

// Complete the decentNumber function below.
void decentNumber(int n) {
    string num;
    if(n<=5){
        if(!(n%3)){
            num=string(3,'5');
        }
        else if(!(n%5)){
            num=string(5,'3');
        }
    }
    else{
        for(int i=0;i<=n/5;++i){
            if((n-5*i)%3==0){
                num=string(n-5*i,'5') + string(5*i,'3');
                break;
            }
        }
    }
    if(num.size()==0){
        num="-1";
    }
    cout<<num<<endl;


}

int main()
{
    string t_temp;
    getline(cin, t_temp);

    int t = stoi(ltrim(rtrim(t_temp)));

    for (int t_itr = 0; t_itr < t; t_itr++) {
        string n_temp;
        getline(cin, n_temp);

        int n = stoi(ltrim(rtrim(n_temp)));

        decentNumber(n);
    }

    return 0;
}

string ltrim(const string &str) {
    string s(str);

    s.erase(
        s.begin(),
        find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace)))
    );

    return s;
}

string rtrim(const string &str) {
    string s(str);

    s.erase(
        find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
        s.end()
    );

    return s;
}
