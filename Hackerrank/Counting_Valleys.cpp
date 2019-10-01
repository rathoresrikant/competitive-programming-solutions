#include <bits/stdc++.h>
using namespace std;
/*
    * Prosen Ghosh
    * American International University - Bangladesh (AIUB)
    *
*/
int main() {
    int n,updown = 0,res = 0;
    char c;
    cin >> n;
    
    for(int i = 0; i++ < n;){
        cin >> c;
        if(c == 'U')updown++;
        else updown--;
        if(updown == 0 && c == 'U')res++;
    }
    cout << res << endl;
    return 0;
}
