//Link to question
//"https://codeforces.com/contest/1607/problem/D"

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
        vl a(n);
        F0r(i, n) cin >> a[i];
        string s;
        cin >> s;
        ll flag = 0;
        vl r, b;
        F0r(i, n){
            if(s[i] == 'R')
                r.pb(a[i]);
            else
                b.pb(a[i]);
            if(a[i] > n and s[i] == 'R') flag = 1;
            if(a[i] < 1 and s[i] == 'B') flag = 1; 
        }
        sort(all(r));
        sort(all(b));
        if(sz(b) > 0 and sz(r) > 0){
            if(b[sz(b)-1] < r[0]-1) flag = 1;
            else{
                ll d = 1;
                F0r(i, sz(b)){
                    if(b[i] < d) flag = 1;
                    d++;
                }
                d = n;
                F0rr(i, sz(r)){
                    if(r[i] > d) flag = 1;
                    d--;
                }
            }
        }
        else{
            if(sz(b) > 0){
                ll d = 1;
                F0r(i, n){
                    if(b[i] < d) flag = 1;
                    d++;
                }
            }
            else{
                ll d = n;
                F0rr(i, n){
                    if(r[i] > d) flag = 1;
                    d--;
                }
            }
        }
        cout << (!flag?"YES":"NO") << '\n';
    }
    return 0;
}