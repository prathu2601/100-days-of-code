//Link to question
//"https://codeforces.com/contest/1561/problem/B"

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
        ll a, b;
        cin >> a >> b;
        if(b > a)
            swap(a, b);
        ll m = (a-b)/2, mx = a + b - m;
        set<ll> st;
        For(i, m, mx+1){
            st.insert(i);
            i++;
        }
        Forr(i, m, mx+1){
            st.insert(i);
            i--;
        }
        cout << st.size() << '\n';
        FOR(it, st) cout << it << ' ';
        cout << '\n';
    }
    return 0;
}