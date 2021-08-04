//Link to question
//"https://codeforces.com/problemset/problem/1551/C"

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
        vector<string> vs(n);
        F0r(i, n) cin >> vs[i];
        vector<vector<ll> > v(n, vector<ll>(5, 0));
        F0r(i, n){
            F0r(j, vs[i].size())
                v[i][vs[i][j]-'a']++;
        }
        ll ans = 0;
        F0r(i, 5){
            vector<ll> x;
            F0r(j, n){
                x.push_back(2*v[j][i]-vs[j].size());
            }
            sort(all(x));
            reverse(all(x));
            ll d = 0;
            F0r(j, n){
                d += x[j];
                if(d <= 0)
                    break;
                ans = max(ans, j+1);
            }
        }
        cout << ans << '\n';
    }
    return 0;
}