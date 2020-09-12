#include<stack>
#include<cstring>
class Solution {
public:
    bool isValid(string s) {
    int i=0;
    stack<char> x;
    while(s[i]!='\0'){
    if(s[i]=='[' || s[i]=='(' || s[i]=='{'){
    x.push(s[i]);
    }
    else{
    if(x.empty()){
        return false;
    }
    char ch=x.top();
    if(ch=='[' && s[i]==']')
    {
    x.pop();
    }
        else if(ch=='{' && s[i]=='}')
        {
            x.pop();
        }
        else if(ch=='(' && s[i]==')'){
            x.pop();
        }
        else{
            return false;
        }
    }
        i++;
    }
    if(!x.empty()){
    return false ; 
    }
        else{
            return true;
        }
    }
};