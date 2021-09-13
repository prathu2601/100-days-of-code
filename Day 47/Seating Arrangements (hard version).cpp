//Link to question
//"https://codeforces.com/contest/1566/problem/D2"

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
        ll n, m;
        cin >> n >> m;
        ll a[n*m];
        vector<pair<ll, ll> > b(n*m);
        F0r(i, n*m) cin >> a[i], b[i].fi = a[i], b[i].se = i;
        sort(all(b));
        ll count = 0;
        //n = n*m;
        F0r(i, n){
            ll x = i*m;
            F0r(j, m){ 
                For(k, j+1, m){
                    if(b[x+j].se < b[x+k].se)
                        count++;
                }
                //cout << '(' << b[i*m+j].fi << ',' << b[i*m+j].se << ')' << ' ';
            }
            //cout << '\n';
        }
        //cout << count << ' ';
        F0r(i, n){
            ll x = i*m;
            F0r(j, m){
                ll z=0;
                while(b[x+j].fi == b[x+j+1].fi and j+1 < m){
                    j++;
                    z++;
                }
                count -= z*(z+1)/2;
            }
        }
        cout << count << '\n';
    }
    return 0;
}
