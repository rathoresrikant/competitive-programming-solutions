unordered_map<string,int>mp;
int solve(string s,int i,int j,bool isTrue)
{
    if(i>j)return 0;
    if(i==j)
    {
        if(isTrue==true)
            return (s[i]=='T')?1:0;
        else
            return (s[i]=='F')?1:0;
    }
    string temp=to_string(i);
    temp+=' ';
    temp.append(to_string(j));
    temp+=' ';
    temp.append(to_string(isTrue));
 
    if(mp.find(temp)!=mp.end())
        return mp[temp]%1003;
 
    int ans=0;
    for(int k=i+1;k<j;k+=2)
    {
        int LT=solve(s,i,k-1,true);
        int LF=solve(s,i,k-1,false);
        int RT=solve(s,k+1,j,true);
        int RF=solve(s,k+1,j,false);
 
        if(s[k]=='&')
        {
            if(isTrue==true)
                ans+=LT*RT;
            else
                ans+=LT*RF + LF*RT + LF*RF;
        }
        else if(s[k]=='|')
        {
            if(isTrue==true)
                ans+=LT*RT +LT*RF + LF*RT;
            else
                ans+= LF*RF;
        }
        else if(s[k]=='^')
        {
            if(isTrue==true)
                ans+=LT*RF + LF*RT;
            else
                ans+= LF*RF + LT*RT ;
        }
 
    }
    return mp[temp]=ans%1003;
}
int Solution::cnttrue(string a) {
    mp.clear();
    return (solve(a,0,a.length()-1,true))%1003;
}
