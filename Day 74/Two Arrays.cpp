//Link to question
//"https://codeforces.com/problemset/problem/1417/B"

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
        ll n, k;
        cin >> n >> k;
        vl a(n), b(n, 0);
        vector<pair<ll, ll> > vp(n);
        F0r(i, n) cin >> a[i], vp[i].fi = a[i], vp[i].se = i;
        sort(all(a));
        sort(all(vp));
        F0r(i, n){
            if(a[i] <= k/2)
                b[vp[i].se] = 1;
        }
        if(k%2 == 0){
            ll i = 0, j;
            while(i < n and a[i] != k/2) i++;
            if(i != n){
                j = i;
                while(i < n and a[i] == k/2) i++;
                ll l = j + (i-j)/2;
                //cout << l << '\n';
                while(l<i) b[vp[l++].se]=0;
            }
        }
        F0r(i, n) cout << b[i] << ' ';
        cout << '\n';
    }
    return 0;
}
