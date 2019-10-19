#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
 
 
 
int acmIcpc(string &str1, string &str2, int length){
    int topicsKnown = 0;
    for (int i=0; i<length; i++){
        if (str1.at(i) == '1' or str2.at(i) == '1'){
            topicsKnown+= 1;
        }
    }
    return topicsKnown;
}
int main() {
    string str[500] = {};
    int N, M;
    cin>>N>>M;
    for (int i=0;i<N;i++) {
        cin>>str[i];
    }
     
    int maxKnown = 0, teamsCnt = 0;
     
    for (int i=0;i<N-1;i++) {
        for (int j=i+1;j<N;j++) {
            int knownForThisCombo = acmIcpc(str[i], str[j], M);
            if (knownForThisCombo > maxKnown){
                maxKnown = knownForThisCombo;
                teamsCnt = 1;
            } else if (knownForThisCombo == maxKnown){
                teamsCnt += 1;
            }
        }
    }
     
    cout << maxKnown << endl;
    cout << teamsCnt << endl;
    return 0;
}
