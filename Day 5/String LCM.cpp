//Link to question
//"https://codeforces.com/problemset/problem/1473/B"

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
        string s, c, ans1, ans2;
        cin >> s >> c;
        ll n = s.size(), m = c.size();
        ll x = m/__gcd(n, m), y = n/__gcd(n, m);
        while(x--){
            ans1 += s;
        }
        while(y--){
            ans2 += c;
        }
        if(ans1 == ans2)
            cout << ans1 << '\n';
        else
            cout << "-1\n";
    }
    return 0;
}