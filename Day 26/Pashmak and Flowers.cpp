//Link to question 
//"https://codeforces.com/problemset/problem/459/B"

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
    
    ll n;
    cin >> n;
    ll a[n];
    F0r(i, n) cin >> a[i];
    ll x = *min_element(a, a+n), y = *max_element(a, a+n), q=0, p=0;
    F0r(i, n){
        if(a[i] == x)
            q++;
        if(a[i] == y)
            p++;
    }
    cout << y - x << ' ';
    if(x == y)
        cout << q*(q-1)/2 << '\n';
    else
        cout << q * p << '\n';
    return 0;
}