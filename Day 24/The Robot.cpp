//Link to question
//"https://codeforces.com/problemset/problem/1468/K"

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
        string s;
        cin >> s;
        ll n = s.size(), an = 0, am = 0;
        F0r(i, n){
            ll x = 0, y = 0;
            F0r(j, i){
                x += (s[j] == 'L'?-1:s[j]=='R'?1:0);
                y += (s[j] == 'D'?-1:s[j]=='U'?1:0);
            }
            ll b = x, c = y, z, w;
            b += (s[i] == 'L'?-1:s[i]=='R'?1:0);
            c += (s[i] == 'D'?-1:s[i]=='U'?1:0);
            x = y = 0;
            F0r(j, n){
                z = x + (s[j] == 'L'?-1:s[j]=='R'?1:0);
                w = y + (s[j] == 'D'?-1:s[j]=='U'?1:0);
                if(z == b and w == c);
                else{
                    x = z;
                    y = w;
                }
            }
            if(x == 0 and y == 0){
                an = b;
                am = c;
                break;
            }
        }
        cout << an << ' ' << am << '\n';
    }
    return 0;
}