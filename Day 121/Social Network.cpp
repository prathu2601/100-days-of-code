//Link to question
//"https://codeforces.com/problemset/problem/1609/D"

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
        set<set<ll> > vs;
        ll c = 0;
        while(k--){
            ll x, y;
            cin >> x >> y;
            set<ll> st;
            st.insert(x);
            st.insert(y);
            if(vs.empty()){
                cout << "1\n";
                vs.insert(st);
                continue;
            }
            set<set<ll> > v;
            ll m = sz(vs);
            FOR(it, vs){
                set<ll> z = it;
                if(z.count(x) and z.count(y)){ 
                    FOR(itr, z) st.insert(itr);
                    c++;
                }
                else if(z.count(x)){
                    FOR(itr, z) st.insert(itr);
                }
                else if(z.count(y)){
                    FOR(itr, z) st.insert(itr);
                }
                else v.insert(it);
            }
            //FOR(it, st) cout << it << ' ';
            v.insert(st);
            ll ans = 0;
            vl w;
            FOR(it, v){
                w.pb(sz(it));
            }
            sort(rall(w));
            if(sz(v) == 1) ans = min(w[0]+c, n);
            else{
                F0r(i, min(c+1, sz(w))) ans += (w[i]);
                if(c >= sz(w)) ans += c+1-sz(w);
                ans = min(ans, n);
            }
            cout << ans - 1 << '\n';
            vs = v;
        }
    }
    return 0;
}