/*
Link to problem: https://leetcode.com/problems/valid-palindrome/
*/
class Solution {
public:
    bool isPalindrome(string s) {
        if(s.size()==0){
            return true;
        }
        vector<char>v;
        for(int i=0;i<s.size();i++){
            if(s[i]>='a' && s[i]<='z'){
                v.push_back(s[i]);
            }
            else if(s[i]>='A' && s[i]<='Z'){
                v.push_back(tolower(s[i]));
            }
            else if(s[i]>='0' && s[i]<='9'){
                v.push_back(s[i]);
            }   
        }
        vector<char>v2=v;
        reverse(v.begin(),v.end());
        if(v2==v){
            return true;
        }
        return false;
    }
};