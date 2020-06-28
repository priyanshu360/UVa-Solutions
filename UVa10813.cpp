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

int card[5][5];
bool vis[5][5];

bool check(){
	loop(i, 5){
		bool f = 1;
		loop(j, 5){
			f &= vis[i][j];
		}
		if(f) return true;
	}
	loop(i, 5){
		bool f = 1;
		loop(j, 5){
			f &= vis[j][i];
		}
		if(f) return true;
	}
	bool flag = 1;
	loop(i, 5){
		if(vis[i][5-i-1] == 0) flag = 0;
	}
	if(flag) return true;
	loop(i, 5){
		if(vis[i][i] == 0) return false;
	}
	return true;
}


void solve(){
	loop(i, 5){
		loop(j, 5){
			vis[i][j] = 0;
			if(i == 2 && j == 2) { vis[i][j] = 1; continue; }
			cin>>card[i][j];
		}
	}
	int count = 0; bool f = 0;
	loop(k, 75){
		count++;
		int t;
		cin>>t;
		loop(i, 5) loop(j, 5) if(card[i][j] == t) vis[i][j] = 1;
		if(check() && f == 0){
			cout<<"BINGO after "<<count<<" numbers announced\n";
			f = 1;
		}
	}
}




int main() {
	fast_io;
    int t = 1;
    cin >> t;
    while(t--) {
      solve();
    }
    return 0;
}


