#include <bits/stdc++.h>
using namespace std;

bool checkpalindrome(string str){
	int start=0,end=str.length()-1;
	while(start<end){
		if(str[start]!=str[end]){
			break;
		}
		start++;
		end--;
	}
	if(start>=end){
		return true;
	}
	return false;
}
bool allLetterSame(string str){
	char same=str[0];
	for(int i=1;i<str.length();i++){
		if(str[i]!=same){
			return false;
		}
	}
	return true;
}

int main(){
	#ifndef ONLINE_JUDGE
    // for getting input from input.txt
    freopen("input.txt", "r", stdin);
    // for writing output to output.txt
    freopen("output.txt", "w", stdout);
#endif
    string str;
    cin>>str;

    bool check=checkpalindrome(str);
    if(!check){
    	cout<<str.length()<<endl;
    	return 0;
    }
    else{
    	if(allLetterSame(str)){
    		cout<<"0"<<endl;
    	}
    	else{
    		cout<<str.length()-1<<endl;
    	}
    }
}