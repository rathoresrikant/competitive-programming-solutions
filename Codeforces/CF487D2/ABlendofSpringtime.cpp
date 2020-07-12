#include <bits/stdc++.h>
using namespace std;

bool case1(string str){
	for(int i=0;i<str.length();i++){
		if(str[i]=='A'){
			if(i+1<str.length()&&str[i+1]=='B'){
				if(i+1<str.length()&&str[i+2]=='C'){
					return true;
				}
			}
		}
	}
	return false;
}
bool case2(string str){
	for(int i=0;i<str.length();i++){
		if(str[i]=='A'){
			if(i+1<str.length()&&str[i+1]=='C'){
				if(i+1<str.length()&&str[i+2]=='B'){
					return true;
				}
			}
		}
	}
	return false;
}
bool case3(string str){
	for(int i=0;i<str.length();i++){
		if(str[i]=='B'){
			if(i+1<str.length()&&str[i+1]=='A'){
				if(i+1<str.length()&&str[i+2]=='C'){
					return true;
				}
			}
		}
	}
	return false;
}
bool case4(string str){
	for(int i=0;i<str.length();i++){
		if(str[i]=='B'){
			if(i+1<str.length()&&str[i+1]=='C'){
				if(i+1<str.length()&&str[i+2]=='A'){
					return true;
				}
			}
		}
	}
	return false;
}
bool case5(string str){
	for(int i=0;i<str.length();i++){
		if(str[i]=='C'){
			if(i+1<str.length()&&str[i+1]=='A'){
				if(i+1<str.length()&&str[i+2]=='B'){
					return true;
				}
			}
		}
	}
	return false;
}
bool case6(string str){
	for(int i=0;i<str.length();i++){
		if(str[i]=='C'){
			if(i+1<str.length()&&str[i+1]=='B'){
				if(i+1<str.length()&&str[i+2]=='A'){
					return true;
				}
			}
		}
	}
	return false;
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
    if(case1(str)||case2(str)||case3(str)||case4(str)||case5(str)||case6(str)){
    	cout<<"Yes"<<endl;
    }
    else{
    	cout<<"No"<<endl;
    }
}