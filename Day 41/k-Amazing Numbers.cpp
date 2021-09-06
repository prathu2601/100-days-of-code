//Link to question
//"https://codeforces.com/problemset/problem/1416/A"

#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define For(i, a, b) for(ll i=a; i<(b); i++)
#define F0r(i, a) for(ll i=0; i<(a); i++)
#define Forr(i, a, b) for(ll i = (b)-1; i >= a; i--)
#define F0rr(i, a) for(ll i = (a)-1; i >= 0; i--)
#define FOR(it, a) for(auto it:(a))
#define all(a) (a).begin(), (a).end()
#define max(a, b) ((a > b)?(a):(b))
#define min(a, b) ((a < b)?(a):(b))
#define pb(x) push_back((x))
#define mp(x, y) make_pair(x, y)
#define fi first
#define se second
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
    
    ll t;
    cin >> t;
    while(t--){
        ll n;
        cin >> n;
        ll a[n], b[n];
        vector<ll> v[n];
        F0r(i, n) cin >> a[i], a[i]--, v[a[i]].pb(i);
        memset(b, -1, sizeof(b));
        set<ll> st;
        F0r(i, n) st.insert(i);
        F0r(i, n){
            if(v[i].size() == 0)
                continue;
            ll x = -1;
            F0r(j, v[i].size()-1){
                x = max(v[i][j+1]-v[i][j], x);
            }
            x = max(x, max(v[i][0]+1, n-v[i][v[i].size()-1]));
            if(x != -1){
                auto it = st.find(x-1);
                while(it != st.end()){
                    b[*it] = i+1;
                    auto itr = it;
                    it++;
                    st.erase(itr);
                }
            }
        }
        F0r(i, n) cout << b[i] << ' ';
        cout << '\n';
    }
    return 0;
}
