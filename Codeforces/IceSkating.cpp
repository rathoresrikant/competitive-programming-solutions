#include <iostream>
 
using namespace std;
 
int n;
int cordX[101], cordY[101];
bool vis[101];
 
void dfs(int pos){
	vis[pos] = 1;
	for(int i = 0; i < n; i++){
        if((cordX[i] == cordX[pos] || cordY[i] == cordY[pos]) && !vis[i]){
            dfs(i);
        }
	}
}
 
int main(){
 
    int cont=-1;
	cin >> n;
 
	for(int i = 0; i < n; i++){
        cin >> cordX[i] >> cordY[i];
	}
	for(int i = 0; i < n; i++){
        if(!vis[i]){
            cont++;
            dfs(i);
        }
	}
	cout << cont << endl;
	return 0;
}
