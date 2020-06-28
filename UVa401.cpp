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
	char a[100];
    int i, k, c, j, len;
    while(scanf("%s", &a)!=EOF){
        k=0;
        c=0;
            len=strlen(a);
            for(j=0; j<len; j++){
                if(a[j]==a[len-j-1]){
                    k++;
                }
            }

        for(i=0; i<len; i++){
            if((a[i]=='A' && a[len-i-1]=='A')||(a[i]=='E' && a[len-i-1]=='3')||(a[i]=='3' && a[len-i-1]=='E')||
               (a[i]=='H' && a[len-i-1]=='H')||(a[i]=='I' && a[len-i-1]=='I')||(a[i]=='J' && a[len-i-1]=='L')||
               (a[i]=='L' && a[len-i-1]=='J')||(a[i]=='M' && a[len-i-1]=='M')||(a[i]=='O' && a[len-i-1]=='O')||
               (a[i]=='2' && a[len-i-1]=='S')||(a[i]=='T' && a[len-i-1]=='T')||(a[i]=='U' && a[len-i-1]=='U')||
               (a[i]=='V' && a[len-i-1]=='V')||(a[i]=='W' && a[len-i-1]=='W')||(a[i]=='X' && a[len-i-1]=='X')||
               (a[i]=='Y' && a[len-i-1]=='Y')||(a[i]=='Z' && a[len-i-1]=='5')||(a[i]=='5' && a[len-i-1]=='Z')||
               (a[i]=='1' && a[len-i-1]=='1')||(a[i]=='S' && a[len-i-1]=='2')||(a[i]=='8' && a[len-i-1]=='8'))
                c++;
        }
        if(k==len && len==c)
            printf("%s -- is a mirrored palindrome.\n\n", a);
        else if(k==len && len!=c)
            printf("%s -- is a regular palindrome.\n\n", a);
        else if(k!=len && len==c)
            printf("%s -- is a mirrored string.\n\n", a);
        else if(k!=len && len!=c)
            printf("%s -- is not a palindrome.\n\n", a);
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

