//Link to question
//"https://codeforces.com/contest/1560/problem/D"

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
        string s = to_string(n);
        ll ans = INT_MAX, h = s.size();
        F0r(i, 100){
            ll a = pow(2, i);
            string r = to_string(a);
            ll m = r.size(), j = 0, k = 0;
            while(j < m and k < h){
                if(s[k] == r[j]){
                    k++;
                    j++;
                }
                else{
                    k++;
                }
            }
            //cout << k << ' ' << j << '\n';
            //cout << r << ' ';
            ans = min(ans, (m-j)+(k-j)+(h-k));
        }
        cout << ans << '\n';
    }
    return 0;
}