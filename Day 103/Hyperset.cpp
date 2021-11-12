//Link to question
//"https://codeforces.com/problemset/problem/1287/B"

#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define For(i, a, b) for(ll i=a; i<(b); i++)
#define F0r(i, a) for(ll i=0; i<(a); i++)
#define Forr(i, a, b) for(ll i = (b)-1; i >= a; i--)
#define F0rr(i, a) for(ll i = (a)-1; i >= 0; i--)
#define FOR(it, a) for(auto it:(a))
#define all(a) (a).begin(), (a).end()
#define rall(a) (a).rbegin(), (a).rend()
#define max(a, b) ((a > b)?(a):(b))
#define min(a, b) ((a < b)?(a):(b))
#define pb(x) push_back((x))
#define mp(x, y) make_pair(x, y)
#define sz(a) (a).size()
#define fi first
#define se second
#define vl vector<ll>
#define vll vector<vl>
#define pl pair<ll,ll>
#define MOD 1000000007
#define DOM 998244353

char any(char x, char y){
    string s("SET");
    char c;
    F0r(i, 3){
        if(s[i]!=x and s[i]!=y)
            c = s[i];
    }
    return c;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    
    ll t = 1;
    //cin >> t;
    while(t--){
        ll n, k;
        cin >> n >> k;
        set<string> st;
        vector<string> vs(n);
        ll ans = 0;
        F0r(i, n) cin >> vs[i], st.insert(vs[i]);
        F0r(i, n){
            For(j, i+1, n){
                string s;
                F0r(p, k){
                    if(vs[i][p] == vs[j][p])
                        s+=vs[i][p];
                    else{
                        s += any(vs[i][p], vs[j][p]);
                    }
                }
                if(st.count(s)) ans++;
            }
        }
        cout << ans/3;
    }
    return 0;
}