/*
				Social Network (hard version)

You are messaging in one of the popular social networks via your smartphone. Your smartphone can show at most k most recent conversations with your friends. Initially, the screen is empty (i.e. the number of displayed conversations equals 0).

Each conversation is between you and some of your friends. There is at most one conversation with any of your friends. So each conversation is uniquely defined by your friend.

You (suddenly!) have the ability to see the future. You know that during the day you will receive n messages, the i-th message will be received from the friend with ID idi (1≤idi≤109).

If you receive a message from idi in the conversation which is currently displayed on the smartphone then nothing happens: the conversations of the screen do not change and do not change their order, you read the message and continue waiting for new messages.

Otherwise (i.e. if there is no conversation with idi on the screen):

Firstly, if the number of conversations displayed on the screen is k, the last conversation (which has the position k) is removed from the screen.
Now the number of conversations on the screen is guaranteed to be less than k and the conversation with the friend idi is not displayed on the screen.
The conversation with the friend idi appears on the first (the topmost) position on the screen and all the other displayed conversations are shifted one position down.
Your task is to find the list of conversations (in the order they are displayed on the screen) after processing all n messages.

	Time limit: 2 sec

*/

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long l;
#define rep(i,n) for(ll i = 0; i<n ; ++i)
#define repj(j,i,n) for(ll j = i; j<n; ++j)


void solve(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long n,k;
    cin>>n>>k;
    long a[n],b[n];
    set<l> s, ss;
    std::deque<long> q ;
	l ans = 0;
    rep(i, n){
        cin>>a[i];

		if(ss.find(a[i]) != ss.end()){
            
        }
        else{
            if(q.size()<k){
                q.push_back(a[i]);
				ss.insert(a[i]);
            }
            else{
				ss.erase(q.front());
                q.pop_front();
                q.push_back(a[i]);
				ss.insert(a[i]);
            }
        }
    }
    l m = q.size();
    cout<<m<<"\n";
    
    std::deque<long>::iterator it;
    
    while(!q.empty()){
        cout<<q.back()<<" ";
        q.pop_back();
    }

}

    


int main(){
    solve();

}
