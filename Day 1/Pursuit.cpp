//Link to question
//"https://codeforces.com/problemset/problem/1530/C"

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
        vector<ll> a(n), b(n);
        F0r(i, n) cin >> a[i];
        F0r(i, n) cin >> b[i];
        ll ans = 0;
        sort(a.begin(), a.end());
        sort(b.begin(), b.end());
        vector<ll> v1(n+1, 0), v2(n+1, 0);
        F0r(i, n) v1[i+1] = v1[i]+a[i];
        F0r(i, n) v2[i+1] = v2[i]+b[i];

        while(1){
            ll z = (ans+n)/4;
            ll a1 = 100*ans + v1[n]-v1[z];
            ll a2 = v2[n] - v2[max(0LL, z-ans)];

            if(a1 >= a2){
                cout << ans << '\n';
                break;
            }
            ans++;
        }
    }
    return 0;
}