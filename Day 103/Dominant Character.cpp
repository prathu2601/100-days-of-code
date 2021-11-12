//Link to question
//"https://codeforces.com/contest/1605/problem/C"

#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define For(i, a, b) for(ll i=a; i<(b); i++)
#define F0r(i, a) for(ll i=0; i<(a); i++)
#define Forr(i, a, b) for(ll i = (b)-1; i >= a; i--)
#define F0rr(i, a) for(ll i = (a)-1; i >= 0; i--)
#define FOR(it, a) for(auto it:(a))
#define all(a) (a).begin(), (a).end()
#define rall(a) (a).rbegin(), (a).rend()
#define max(a, b) ((a > b)?(a):(b))
#define min(a, b) ((a < b)?(a):(b))
#define pb(x) push_back((x))
#define mp(x, y) make_pair(x, y)
#define sz(a) (a).size()
#define fi first
#define se second
#define vl vector<ll>
#define vll vector<vl>
#define pl pair<ll,ll>
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
        string s;
        cin >> s;
        ll x = 0;
        F0r(i, n-1){
            if(s[i] == s[i+1] and s[i] == 'a'){
                x = 2;
                break;
            }
        }
        if(x == 2){
            cout << 2 << '\n';
            continue;
        }
        ll ans = 10;
        F0r(i, n-2){
            if(s[i] == 'a' and s[i+2] == 'a'){
                ans = min(ans, 3);
                break;
            }
        }
        F0r(i, n-3){
            if(s[i] == 'a' and s[i+3] == 'a'){
                if(s[i+1] != s[i+2]){
                    ans = min(ans, 4);
                    break;
                }
            }
        }
        F0r(i, n-6){
            if(s[i] == 'a' and s[i+3] == 'a' and s[i+6] == 'a'){
                if(s[i+1] != s[i+4] and s[i+1] != s[i+4] and s[i+2] == s[i+1])
                    ans = min(ans, 7);
            }
        }
        if(ans == 10) cout << "-1\n";
        else cout << ans << '\n';
    }
    return 0;
}