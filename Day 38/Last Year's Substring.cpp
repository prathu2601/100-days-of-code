//Link to question
//"https://codeforces.com/problemset/problem/1462/B"

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
        ll n;
        cin >> n;
        string s, a, b, c, d, e, ans;
        cin >> s;
        ans = "2020";
        a = s.substr(0, 4);
        b = s.substr(0, 3) + s[n-1];
        c = s.substr(0, 2) + s[n-2] + s[n-1];
        d = s[0] + s.substr(n-3, 3);
        e = s.substr(n-4);
        if(a == ans or b == ans or c == ans or d == ans or e == ans)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}
