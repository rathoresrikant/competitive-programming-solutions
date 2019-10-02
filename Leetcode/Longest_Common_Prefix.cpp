#include<bits/stdc++.h>
using namespace std;
class Solution {
    public String longestCommonPrefix(String[] strs) {
        
        String res = "";
        if(strs.length == 0)
            return res;
        String minStr = strs[0];
        int minLen = strs[0].length();
        
        for(int i = 1; i < strs.length; i++){
            int len = strs[i].length();
            if(len < minLen){
                minLen = len;
                minStr = strs[i];
            }
        }
               
        for(int i = 0; i < minStr.length(); i++){
            char currChar = minStr.charAt(i);
            for(int j = 0; j < strs.length; j++){
                if(strs[j].charAt(i) != currChar)
                    return res;
            }
            res += currChar;
        }
        
        return res;
    }
}
