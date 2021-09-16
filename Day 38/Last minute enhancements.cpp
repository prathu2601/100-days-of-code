//Link to question
//"https://codeforces.com/problemset/problem/1466/B"

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
        ll a[n];
        map<ll, ll> mp;
        F0r(i, n){ 
            cin >> a[i];
            mp[a[i]]++;
        }
        set<ll> st;
        FOR(it, mp){
            if(st.find(it.fi) != st.end()){
                st.insert(it.fi+1);
            }
            else{
                if(it.se > 1){
                    st.insert(it.fi+1);
                }
                st.insert(it.fi);
            }
        }
        cout << st.size() << '\n';
    }
    return 0;
}