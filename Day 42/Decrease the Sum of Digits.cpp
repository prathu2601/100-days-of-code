//Link to question
//"https://codeforces.com/problemset/problem/1409/D"

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
        ll n, s;
        cin >> n >> s;
        ll x = n, y = 0;
        while(x > 0){
            y += x%10;
            x /= 10;
        }
        if(s >= y)
            cout << "0\n";
        else{
            ll ans = 0, d = 1;
            x = n;
            while(y > s){
                ll q = (x/d)%10;
                x += d*((10-q)%10);
                ans += d*((10-q)%10);
                ll z = x;
                y = 0;
                while(z > 0){
                    y += z % 10;
                    z /= 10;
                }
                d *= 10;
            }
            cout << ans << '\n';
        }
    }
    return 0;
}
