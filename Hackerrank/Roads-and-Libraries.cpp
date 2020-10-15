/*
Hackerrank Link to problem: https://www.hackerrank.com/challenges/torque-and-development/problem
Categories: Algorithm -> Graph Theory
*/

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#define ll long long
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int q;  //q is number of test cases
    cin>>q;
    while(q!=0){
        q--;
        ll cost=0;
        ll n,e,c_lib,c_road;  //number of cities and libraries, cost of library and road

        cin>>n>>e>>c_lib>>c_road;

        vector<ll>adj[n+1];
        vector<ll>visited(n+1); //
        vector<ll>stack;

        //creating a arraylist for each vertex pair, where a path exists between them
        for(ll i=0;i<e;i++){
            ll v1,v2;
            cin>>v1>>v2;
            adj[v1].push_back(v2);
            adj[v2].push_back(v1);
        }

        /* whole cities are represented using graph, finding the number of 
        components of the graph and adding one library in each component will reduce the         cost, hence from here either DFS or BFS will work, here DFS has been used
        */
        ll cur;
        ll temp;
        for(ll id=1;id<=n;id++){
            temp=0;
            stack.push_back(id); //for each vertex push it to stack 
            while(stack.size()!=0){ //while stack is not empty perform following checks
                cur=stack.back(); //current is the last element of stack
                stack.pop_back(); //delete the last element of stack
                if(visited[cur]!=1){ //current index node isn't visited then mark visited
                    visited[cur]=1;
                    temp++;
                    for(ll i=0;i<adj[cur].size();i++){ //push all adjecent nodes in stack
                        stack.push_back(adj[cur][i]);
                    }
                }
            }
            /*Build N-1 roads if component contains N cities and (price of road)<(price of library) else build library instead
            */
            if(temp>0){ 
                if(c_road>c_lib){
                    cost=cost+(c_lib*temp);
                }
                else{
                    cost=cost+(c_road*(temp-1))+c_lib;
                }
            }
        }
        cout<<cost<<endl;   
    }
    return 0;
}

