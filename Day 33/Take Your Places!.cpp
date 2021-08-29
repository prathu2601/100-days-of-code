//Link to question
//"https://codeforces.com/contest/1556/problem/B"

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
        ll a[n], ans = 0;
        vector <ll> p, q;
        F0r(i, n){
            cin >> a[i];
            if(a[i] % 2)
                p.pb(i);
            else
                q.pb(i);
        }
        if(n == 1){
            cout << "0\n";
            continue;
        }
        ll m = p.size(), l=q.size();
        if(abs(l-m) > 1)
            cout << "-1\n";
        else{
            if(l != m){
                if(p[0] == 0){
                    ll j = 0;
                    if(m < l){
                        j = 1;
                    }
                    FOR(it, p){
                        ans += abs(it-j);
                        j+=2;
                    }
                    //cout << ans << ' ';
                    j = 1;
                    if(m < l)
                        j = 0;
                    FOR(it, q){
                        ans += abs(it-j);
                        j+=2;
                    }
                    //cout << ans << ' ';
                }
                else{
                    ll j = 1;
                    if(l < m)
                        j = 0;
                    FOR(it, p){
                        ans += abs(it-j);
                        j+=2;
                    }
                    j = 0;
                    if(l < m)
                        j = 1;
                    FOR(it, q){
                        ans += abs(it-j);
                        j+=2;
                    }
                }
            }
            else{
                ll j = 0;
                FOR(it, p){
                    ans += abs(it-j);
                    j += 2;
                }
                j = 1;
                FOR(it, q){
                    ans += abs(it-j);
                    j += 2;
                }
                j = 1;
                ll an = 0;
                FOR(it, p){
                    an += abs(it-j);
                    j += 2;
                }
                j = 0;
                FOR(it, q){
                    an += abs(it-j);
                    j += 2;
                }
                //cout << an << ' ' << ans << ' ';
                ans = min(an, ans);
            }
            cout << ans/2 << '\n';
        }
    }
    return 0;
}
