//Link to question
//"https://codeforces.com/problemset/problem/1512/E"

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
        ll n, l, r, s;
        cin >> n >> l >> r >> s;
        ll x = r - l + 1, z = n*(n+1)/2-(n-x)*(n-x+1)/2, y = x*(x+1)/2;
        if(z < s or s < y)
            cout << "-1\n";
        else{
            ll ans = 0, g = n;
            vector<bool> b(n+1, false);
            set<ll> st;
            while(x > 0){
                ll m = s-g;
                if(x*(x-1)/2 > m){
                    g--;
                    continue;
                }
                st.insert(g);
                b[g] = 1;
                x--;
                g--;
                s = m;
            }/*
            FOR(it, st) cout << it << ' ';
            cout << '\n';*/
            ll j = 1;
            For(i, 1, n+1){
                if(i == l){
                    FOR(it, st) cout << it << ' ';
                    i = r;
                }
                else{
                    while(b[j] and j < n+1) j++;
                    cout << j << ' ';
                    j++;
                }
            }
            cout << '\n';
        }
    }
    return 0;
}