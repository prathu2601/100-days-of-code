//Link to question
//"https://codeforces.com/problemset/problem/1461/D"

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

set<ll> st;
vl a;

void any(ll l, ll r){
    ll sum = 0;
    For(i, l, r+1) sum += a[i];
    st.insert(sum);
    ll mid = (a[l]+a[r])/2, x = -1;
    For(i, l, r+1){
        if(a[i] <= mid) x = i;
        else break;
    }
    if(x == -1 or x == r) return;
    any(l, x);
    any(x+1, r);
}

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
        ll n, q;
        cin >> n >> q;
        a.resize(n);
        st.clear();
        F0r(i, n) cin >> a[i];
        sort(all(a));
        any(0, n-1);
        while(q--){
            ll x;
            cin >> x;
            if(st.count(x)) cout << "YES\n";
            else cout << "NO\n";
        }
    }
    return 0;
}