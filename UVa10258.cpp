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

int probTime[101][11];
map <int, unordered_set <int> > m;
bool attemp[101];


bool cmp(int a, int b){
	if(m[a].size() == m[b].size()){
		int timea = 0, timeb = 0;
		for(auto i : m[a]) timea += probTime[a][i];
		for(auto i : m[b]) timeb += probTime[b][i];
		if(timea == timeb) return a < b;
		return (timea < timeb);
	}
	return (m[a].size() > m[b].size());
}

void solve(){
	string line;
	memset(probTime, 0, sizeof(probTime));
	memset(attemp, 0, sizeof(attemp));
	m.clear();
	while((getline(cin, line), line.size()>0)) {
		int a, b, c;
		char ch;
		stringstream ss(line);
		ss>>a>>b>>c>>ch;
		attemp[a] |= 1;
		if(ch == 'R' || ch == 'U' || ch == 'E' ) continue;
		if(m.find(a) != m.end()){
			if(m[a].find(b) != m[a].end()) continue;
		}
		probTime[a][b] += ch == 'C'? c : 20;
		if(ch == 'C'){
			m[a].insert(b);
		}
	}
	vector <int> v;
	tr(it, m) v.pb(it->fir);
	sort(all(v), cmp);
	for(auto x : v){
		int timev = 0;
		for(auto i : m[x]) timev += probTime[x][i];
		cout<<x<<" "<<m[x].size()<<" "<<timev<<endl;
	}
	loop(i, 101){
		if(attemp[i] && m.find(i) == m.end()){
			cout<<i<<" "<<0<<" "<<0<<"\n";
		}
	}
}




int main() {
	fast_io;
    int t = 1;
    cin >> t;
    string s;
    getline(cin, s);
    getline(cin, s);
    while(t--) {
      solve();
      if(t != 0) cout<<"\n";
    }
    return 0;
}


