//Link to question
//"https://codeforces.com/problemset/problem/1354/B"

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

ll any(ll x, ll y, ll z){
    ll mi = min(x, min(y, z));
    ll ma = max(x, max(y, z));
    return ma - mi + 1;
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
        string s;
        cin >> s;
        ll n = sz(s), x=-1, y=-1, z=-1, ans = MOD;
        F0r(i, n){
            if(s[i] == '1')
                x = i;
            else if(s[i] == '2')
                y = i;
            else
                z = i;
            if(x!=-1 and y!=-1 and z!=-1){
                ans = min(ans, any(x, y, z));
                if(x < y and x < z)
                    x = -1;
                else if(y < z)
                    y = -1;
                else
                    z = -1;
                //cout << ans << ' ';
            }
        }
        if(ans == MOD) ans = 0;
        cout << ans << '\n';
    }
    return 0;
}
