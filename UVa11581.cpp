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

int N;
char grid[10000][3][3];
int x[4] = { -1, 0, 0, 1 }, y[4] = { 0, 1, -1, 0 };
 
bool done(int l) {
    for(int i = 0; i < 3; i++)
        for(int j = 0; j < 3; j++)
            if(grid[l][i][j] == '1') return false;
    return true;
}
 
int f(int l) {
    if(done(l)) return -1;
 
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            int cell = 0;
            for(int k = 0; k < 4; k++) {
                int r = i + x[k], c = j + y[k];
                if(r >= 0 && r < 3 \
                        && c >= 0 && c < 3 \
                        && grid[l][r][c] == '1') {
                    cell++;
                }
            }
            grid[l + 1][i][j] = cell % 2 == 1? '1' : '0';
        }
    }
    return 1 + f(l + 1);
}
 


void solve(){
	scanf("\n");
        for(int i = 0; i < 3; i++)
            cin>>(grid[0][i]);
        printf("%d\n", f(0));
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

