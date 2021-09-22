//Link to question
//"https://codeforces.com/problemset/problem/1367/C"

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
#define sz(a) (s).size()
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
        ll n, k;
        cin >> n >> k;
        string s;
        cin >> s;
        set<ll> st;
        F0r(i, n){
            if(s[i] == '1')
                st.insert(i);
        }
        ll ans = 0;
        if(st.size() == 0){
            ll x = 0;
            while(x < n) x+=(k+1), ans++;
            cout << ans << '\n';
            continue;
        }
        F0r(i, n){
            if(s[i] == '0'){
                auto it = st.lower_bound(i);
                if(it == st.end()){
                    it--;
                    ll x = *it+k+1;
                    while(x < n) x+=(k+1), ans++;
                    break;
                }
                else if(it == st.begin()){
                    ll x = *it-k-1;
                    while(x >= 0) x-=(k+1), ans++;
                    i = *it;
                }
                else{
                    auto itr = it;
                    itr--;
                    ll x = *itr+k+1;
                    while(x+k < *it) ans++, x+=(k+1);
                    i = *it;
                }
            }
        }
        cout << ans << '\n';
    }
    return 0;
}
