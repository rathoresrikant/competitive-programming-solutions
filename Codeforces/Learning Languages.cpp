    #include <bits/stdc++.h>
    using namespace std;
     
    int parent[100];
    int ranks[100];
     
    int find(int a)
    {
        if(a==parent[a])    return a;
        int x=find(parent[a]);
        parent[a]=x;
        
        return x;
    }
     
    int unite(int a, int b)
    {
        int x=find(a),y=find(b);
        
        if(x==y)    return 0;
        
        if(ranks[x]>ranks[y])   swap(x,y);
        
        parent[x]=y;
        ranks[y]+=ranks[x];
        return 1;
        
    }
    int main()
    {
        ios_base::sync_with_stdio(false);
        int n,m,temp,temp2;
        cin>>n>>m;
        vector<vector<int>> lang(m);
        int component=n;
        int tl=0;
        for(temp=0;temp<n;temp++)
        {
            parent[temp]=temp;
            ranks[temp]=1;
            int k;
            cin>>k;
            if(k==0)    tl++;
            for(temp2=0;temp2<k;temp2++)
            {
                int x;
                cin>>x;
                x--;
                lang[x].push_back(temp);
            }
        }
        for(temp=0;temp<m;temp++)
        {
            for(temp2=0;temp2<int(lang[temp].size())-1;temp2++)
            {
                int a=lang[temp][temp2],b=lang[temp][temp2+1];
                component-=unite(a,b);
            }
        }
        if(tl==n)   component++;
        cout<<component-1<<"\n";
    }