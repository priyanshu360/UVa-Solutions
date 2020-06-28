#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
using namespace __gnu_pbds;


using namespace std;

#define debug(x) cout << '>' << #x << ':' << x << endl;
#define loop(i,n) for(int i=0;i<(int)(n);i++)
#define foi(i,k,n) for(int i=(k); i<(int)(n); i+=1)
#define fod(i,n,k) for(int i=k; i>=(int)n; i-=1)
#define fast_io ios_base::sync_with_stdio(false) , cin.tie(NULL);
#define all(x) x.begin(), x.end()
#define tr(it, a) for(auto it = a.begin(); it != a.end(); it++)
#define endl "\n"


#define INF 0x3f3f3f3f
#define PI 3.1415926535897932384626433832795
#define MOD 1000000007

#define fir first
#define sec second
#define pb push_back
#define mp make_pair

typedef long long int llint;
typedef pair<int, int> PII;
typedef vector<int> VI;
typedef vector<llint> VL;
typedef vector<string> VS;
typedef vector<PII> VII;
typedef vector<VI> VVI;
typedef map<int,int> MII;
typedef set<int> SI;
string tostr(int n) {stringstream rr;rr<<n;return rr.str();}
llint toint(string s) {stringstream ss(s); llint x; ss >> x; return x;}
//gp_hash_table<string, llint> table;


//int mpow(llint base, llint exp) {
  //base %= MOD;
  //llint result = 1;
  //while (exp > 0) {
    //if (exp & 1) result = ((llint)result * base) % MOD;
    //base = ((llint)base * base) % MOD;
    //exp >>= 1;
  //}
  //return result;
//}


//void makegraph(int n, int m){
	//int i, u, v;
	//while(m--){
		//cin>>u>>v;
		//u--, v--;
		//g[u].pb(v);
		//g[v].pb(u);
	//}
//}

//void dfs(int u, int par){
	//for(int v:g[u]){
		//if (v == par) continue;
		//dfs(v, u);
	//}
//}


// ------------------------------------------------------------------PRIYANSHU RAJPUT----------------------------------------------------------------  //



void solve(){
	int f = 0;
	while(1){
		int n, m;
		cin>>n>>m;
		if(n == 0 && m == 0) break;
		f++;
		if(f > 1) cout<<endl;
		cout<<"Field #"<<f<<":\n";
		char a[n][m];
		loop(i, n) loop(j, m) cin>>a[i][j];
		loop(i, n){
			loop(j, m){
				if(a[i][j] == '.'){
					int count = 0;
					if(i != 0 && a[i-1][j] == '*') count++;
					if(j != 0 && a[i][j-1] == '*') count++;
					if(i != 0 && j != 0 && a[i-1][j-1] == '*') count++;
					if(i != n - 1 && a[i+1][j] == '*') count++;
					if(i != n-1 && j != m-1 && a[i+1][j+1] == '*') count++;
					if(j != m-1 && a[i][j+1] == '*') count++;
					if(i != 0 && j != m - 1 && a[i-1][j+1] == '*') count++;
					if(j != 0 && i != n-1 && a[i+1][j-1] == '*') count++;
					a[i][j] = count + '0'; 
				}
				cout<<a[i][j];
			}
			cout<<'\n';
		}
		//cout<<'\n';
	}
}




int main() {
	fast_io;
    int t = 1;
    //cin >> t;
    while(t--) {
      solve();
    }
    return 0;
}


