//Link to question
//"https://codeforces.com/problemset/problem/1385/D"

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

ll ans(string s, char c, ll n){
    if(n == 1)
        return s[0] != c;
    ll mid = n/2;
    ll x = ans(string(s.begin(), s.begin() + mid), c+1, mid);
    x += n/2 - count(s.begin() + mid, s.end(), c);
    ll y = ans(string(s.begin() + mid, s.end()), c+1, mid);
    y += n/2 - count(s.begin(), s.begin() + mid, c);
    return min(x, y);
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
        ll n;
        cin >> n;
        string s;
        cin >> s;
        cout << ans(s, 'a', n) << '\n';
    }
    return 0;
}
