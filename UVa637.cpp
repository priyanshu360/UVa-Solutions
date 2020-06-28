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

int book[30][4];


void solve(){
	int i,n,page,now;
    for (cin >> n; n; cin >> n) {
        page = n / 4 + (n % 4 ? 1 : 0);
        memset(book, 0, sizeof(book));
        
        now = 1;
        for (i = 0; i < page; i++) {
            if (now <= n) { book[i][1] = now++; }
            if (now <= n) { book[i][2] = now++; }
        }
        for (i = page - 1; i >= 0; i--) {
            if (now <= n) { book[i][3] = now++; }
            if (now <= n) { book[i][0] = now++; }
        }
        cout << "Printing order for " << n << " pages:" << endl;
        for (i = 0; i < page; i++) {
            if (book[i][0] || book[i][1]) {
                cout << "Sheet " << i + 1 << ", front: ";
                if (book[i][0]) { cout << book[i][0]; }
                else { cout << "Blank"; }
                cout << ", ";
                if (book[i][1]) { cout << book[i][1] << endl; }
                else { cout << "Blank" << endl; }
            }
            if (book[i][2] || book[i][3]) {
                cout << "Sheet " << i + 1 << ", back : ";
                if (book[i][2]) { cout << book[i][2]; }
                else { cout << "Blank"; }
                cout << ", ";
                if (book[i][3]) { cout << book[i][3] << endl; }
                else { cout << "Blank" << endl; }
            }
        }
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


