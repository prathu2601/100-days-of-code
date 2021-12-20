//Link to question
//"https://codeforces.com/contest/1619/problem/E"

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
#define con(a) {cout << a << '\n';continue;}
#define bre(a) {cout << a << '\n';break;}
#define fi first
#define se second
#define vl vector<ll>
#define vll vector<vl>
#define pl pair<ll,ll>
#define YN(flag) cout << (flag?"YES":"NO") << '\n';
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

    ll t = 1;
    cin >> t;
    while(t--){
        ll n;
        cin >> n;
        vl a(n), b(n+1, 0), c(n+1, 0);
        map<ll, ll> mp;
        multiset<ll> ms;
        F0r(i, n) cin >> a[i], mp[a[i]]++;
        FOR(it, mp){
            if(it.fi <= n){
                b[it.fi] = it.se;
                ll j = it.se;
                while(j-- > 1) ms.insert(it.fi);
            }
            else break;
        }
        c[0] = 0;
        For(i, 1, n+1){
            c[i] = c[i-1] + b[i-1];
        }
        ll ma = 0;
        F0r(i, n+1){
            if(c[i] < i){
                while(i <= n) cout << "-1 ", i++;
                break;
            }
            else{
                cout << mp[i] + ma << ' ';
                ll l = 0;
                if(mp[i] == 0){
                    if(ms.empty()) continue;
                    auto it = ms.lower_bound(i);
                    it--;
                    l = i-*it;
                    ms.erase(it);
                }
                ma += l;
            }
        }
        cout << "\n";
    }
    return 0;
}