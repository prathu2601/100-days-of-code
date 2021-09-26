//Link to question
//"https://codeforces.com/problemset/problem/1360/D"

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
        if(k >= n) cout << "1\n";
        else if(k == 1)
            cout << n << '\n';
        else{
            ll ans = MOD, x = n;
            if(n%2 == 0){
                if(n <= k*2)
                    ans = 2;
                if(n <= (n/2)*k)
                    ans = min(ans, (n/2));
            }
            for(ll i=3; i*i<=n; i++){
                ll y = n/i;
                if(n%i == 0){
                    if(n <= k*i)
                        ans = min(ans, i);
                    if(n <= y*k)
                        ans = min(ans, y);
                }
            }
            ans = (ans==MOD?n:ans);
            cout << ans << '\n';
        }
    }
    return 0;
}
