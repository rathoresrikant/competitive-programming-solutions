//$ time g++ -c -std=c++11 vec.cpp -fconstexpr-depth=600
//7keyet el STACK hethi work only on windows based sys. like CF; no need to change stack size on ACM/Kattis judge
//#pragma comment(linker, "/STACK:36777216")
//OPT COMPILER:global compiler c++11
//Lex MOD-0 ver. 2.4 (06/08/2018)
//la ilaha illallah
//{
#include<bits/stdc++.h>
#define ll                  long long
#define rep(i,n)            for(auto i=0;i<(n);++i)
#define pb                  push_back
#define mp                  make_pair
#define ff                  first
#define ss                  second
#define sz(v)               v.size()
#define all(v)              std::begin(v), std::end(v)
#define vi                  vector<int>
#define mod                 1000000007LL

#define StringToInt(s,n)    if ( ! (istringstream(s) >> n) ) n = 0;
using namespace std;
template <typename T>
string NumberToString ( T Number ){
	std::ostringstream ss; ss << Number; return ss.str();}

#ifdef ONLINE_JUDGE
#define line
#define o(x)
#else
#define line                cerr<<'\n';
#define o(x)				cerr << __LINE__ << " $" << #x << " = " << (x) << "\n";
#endif // ONLINE_JUDGE

ll qpow(ll p,ll q){ll f=1;while(q){if(q&1)f=f*p%mod;p=p*p%mod;q>>=1;}return f;}
inline int read() {
	int x=0,f=1; char ch=getchar();
	while (ch<'0'||ch>'9') { if (ch=='-') f=-1; ch=getchar(); }
	while (ch>='0'&&ch<='9') { x=x*10+ch-'0'; ch=getchar(); }
	return x*f;
}
//}
ll const N = 3e5 + 53;
ll cum[2][N], asc[2][N], des[2][N],a[2][N];
int main() {
#ifndef ONLINE_JUDGE
freopen("a.txt", "r", stdin);
#endif // ONLINE_JUDGE
	ios::sync_with_stdio(0);
	cin.tie(0);	cout.tie(0);
	//cout << fixed << setprecision(9);

	ll n; cin >> n;
	rep(i,n){
	cin>>a[0][i];
	}
	rep(i,n){
	cin>>a[1][i];
	}

	rep(row,2){
		//cum[row][0]=asc[row][0]=a[row][0];
		for(int i=1; i<n;i++){
			cum[row][i]= cum[row][i-1] + a[row][i];
			asc[row][i]= asc[row][i-1] + a[row][i]*(i);
			//cerr<<row<<"  "<<i <<"  "<<asc[row][i]<<'\n';
		}
	}
//return 0;
line
	rep(row,2)
		for(int i=n-1; i>=0;i--){
			des[row][i]= des[row][i+1] + a[row][i]*((n-1)-i+1);
			//cerr<<i <<"  "<<des[row][i]<<'\n';
		}


		line

	ll felJib = 0;
	ll bestSol = 0;

	ll pos = 0LL;
	int actualRow = 0;
	ll timeLeft = 0LL;


	ll s1,s2,s3,s4,s5,localSol;

	while(pos<n){
			//o(timeLeft)
			//o(pos)
	s1 = asc[actualRow][n-1]-asc[actualRow][pos] ;
	s2 = (timeLeft-(pos))*abs(cum[actualRow][n-1]-cum[actualRow][pos]) ;
	s3 = (timeLeft+n-1 - pos)*abs(cum[!actualRow][n-1]-cum[!actualRow][pos]+a[!actualRow][pos])  ;
	s4 = des[!actualRow][pos];
	localSol = felJib+s1+s2+s3+s4;

	bestSol = max(bestSol, localSol);
	//o(bestSol )


	line

	actualRow= !actualRow;
	timeLeft++;
	felJib+=timeLeft*a[actualRow][pos];
	timeLeft++;
	pos++;
	felJib+=timeLeft*a[actualRow][pos];


	}











	cout<<bestSol;
	return 0;}
