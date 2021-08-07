//Link to question
//"https://codeforces.com/problemset/problem/1419/D1"

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

    ll n;
    cin >> n;
    ll a[n], ans = 0;
    F0r(i, n) cin >> a[i];
    sort(a, a+n);
    ll x = 0, y = (n+1)/2;
    if(n%2)
        y--;
    vector<ll> as;
    while(y < n){
        as.push_back(a[y]);
        as.push_back(a[x]);
        x++;y++;
    }
    For(i, 1, n-1){
        if(as[i] < as[i-1] and as[i] < as[i+1])
            ans++;
    }
    cout << ans << '\n';
    F0r(i, n) cout << as[i] << ' ';
    cout << '\n';
    return 0;
}