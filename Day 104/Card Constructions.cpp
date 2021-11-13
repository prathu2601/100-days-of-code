//Link to question
//"https://codeforces.com/problemset/problem/1345/B"

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
    
    ll t;
    cin >> t;
    set<ll> st;
    ll x = 2, y = 0;
    st.insert(2);
    while(y < 1000000007){
        ll q = *st.rbegin();
        x += 3;
        st.insert(x+q);
        y = q + x;
    }
    //FOR(itr, st) cout << itr << ' ';
    while(t--){
        ll n;
        cin >> n;
        ll ans = 0;
        while(0 < n){
            auto it = st.lower_bound(n);
            if(it == st.end()) it--;
            if(it == st.begin()){
                if(*it > n) break;
                else{
                    n -= *it;
                    ans++;
                }
            } 
            else{
                if(*it > n) it--;
                n -= *it;
                ans++;
            }
        }
        cout << ans << '\n';
    }
    return 0;
}