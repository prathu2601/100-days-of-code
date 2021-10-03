//Link to question
//"https://codeforces.com/contest/1592/problem/A"

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
#define sz(a) (a).size()
#define fi first
#define se second
#define vl vector<ll>
#define vll vector<vector<ll> >
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
        ll n, h;
        cin >> n >> h;
        ll m1=0, m2=0;
        vl a(n);
        F0r(i, n){
            cin >> a[i];
            if(a[i] > m1){
                m2 = m1;
                m1 = a[i];
            }
            else{
                m2 = max(m2, a[i]);
            }
        }
        ll ans = h/(m1+m2), x = h%(m1+m2);
        ans *= 2;
        if(x!=0){
            if(x<=m1)
                ans++;
            else
                ans+=2;
        }
        cout << ans << '\n';
    }
    return 0;
}
