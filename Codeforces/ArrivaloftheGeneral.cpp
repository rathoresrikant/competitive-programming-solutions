#include <iostream>
#include <stdio.h>
 
using namespace std;
 
int main() {
    
    int n, saida=0;
    cin >> n;
    int sol[n];
    for(int i=0; i<n; i++){
        cin >> sol[i];
    }
    int maior=0, menor=1010, pos1=0, pos2=0;
    for(int i=0; i<n; i++){
        if(sol[i] > maior){
            maior = sol[i];
            pos1 = i;
        }
        if(sol[i] <= menor){
            menor = sol[i];
            pos2 = i;
        }
    }
    
    if(pos1 < pos2){
        saida = pos1 + ((n-1)-pos2);
    }else if(pos1 > pos2){
        saida = (pos1 + ((n-1)-pos2))-1;
    }
    cout << saida << "\n";
 
    return 0;
}
