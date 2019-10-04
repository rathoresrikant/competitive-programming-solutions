#include<bits/stdc++.h>43
using namespace std;

int r,c;
int r1,c1;
bool check_grid(vector<string> f,vector<string> s,int i,int j)
{
    int l,k;
    
    for(l=0;l<r1;l++)
    {
        if(l+i<r )
        {
            for(k=0;k<c1;k++)
            {
            if(j+k<c)
                if(f[l+i][j+k]!=s[l][k])
                {
                    return false;
                }
            }
        }
    }
    //cout<<"true"<<endl;
    if(l==r1 && k==c1)
    return true;
    else
        return false;

}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        cin>>r>>c;
        vector<string> f(r);
        for(int i=0;i<r;i++)
            cin>>f[i];
        cin>>r1>>c1;
        vector<string> s(r1);
        for(int i=0;i<r1;i++)
            cin>>s[i];

        bool match =false;
        for(int i=0;i<r;i++)
        {
            for(int j=0;j<c;j++)
            {
                int l,k;
                if(f[i][j]==s[0][0])
                {
                bool check=true;
                if(c>=(c1+j))
                for(l=0;l<r1;l++)
                {
                 if(!check)
                 break;
                    for(k=0;k<c1;k++)
                        {
                            //if(j+k<c)
                            if(f[l+i][j+k]!=s[l][k])
                            {
                            check=false;
                            break;
                            }
                            else
                            {
                                check=true;
                            }
                        }
                }
                if(l==r1 && k==c1)
                {match=true;break;}
                }

            }
            if(match)
                break;

        }
        if(match)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;

    }

}
