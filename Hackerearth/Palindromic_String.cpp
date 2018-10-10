//Solving it by Using stack and Queue Data-Structures

#include<iostream>
using namespace std;
class Solution{
    
    public:
    
    int top=-1,f=0,r=0;
    
    char stack[100],queue[100];
    
    void pushCharacter(char s){
        stack[++top]=s;
    }
    
    void enqueueCharacter(char s){
        queue[r++]=s;
    }
    
    char popCharacter(){
        return stack[top--];
    }
    
    char dequeueCharacter(){
        return queue[f++];
    }
    
};
 
int main(){
    string s;
    getline(cin,s);
    
    Solution obj;
    
    for(int i=0;i<s.length();i++){
        obj.pushCharacter(s[i]);
        obj.enqueueCharacter(s[i]);
    }
    
    bool palindromic=true;
    
    for(int i=0;i<s.length()/2;i++){
        if(obj.popCharacter()!=obj.dequeueCharacter()){
            palindromic=false;
            break;
        }
    }
    
    if(palindromic){
        cout<<"YES";
    }
    else cout<<"NO";
    
    
}
