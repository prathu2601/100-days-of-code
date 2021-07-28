//Link to question
//"https://codeforces.com/problemset/problem/1534/B"

#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define For(i, a, b) for(ll i=a; i<(b); i++)
#define F0r(i, a) for(ll i=0; i<(a); i++)
#define Forr(i, a, b) for(ll i = (b)-1; i >= a; i--)
#define F0rr(i, a) for(ll i = (a)-1; i >= 0; i--)
#define all(a) (a).begin(), (a).end()
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
        ll a[n+2];
        memset(a, 0, sizeof(a));
        For(i, 1, n+1) cin >> a[i];
        ll ans = 0;
        For(i, 1, n+2){
            ans += abs(a[i]-a[i-1]); 
            ans -= max(a[i] - max(a[i-1], a[i+1]), 0LL);
        }
        cout << ans << '\n';
    }
    return 0;
}