//Link to question
//"https://www.codechef.com/START10B/problems/REMONE"

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
        ll a[n], b[n-1], ans = INT_MAX;
        F0r(i, n) cin >> a[i];
        F0r(i, n-1) cin >> b[i];
        sort(a, a+n);
        sort(b, b+n-1);
        
        if(n == 2){
            ans = min(b[0]-a[0], b[0]-a[1]);
            if(ans < 0)
                ans = max(b[0]-a[0], b[0]-a[1]);
        }
        else{
            map<ll, ll> mp;
            ll x, y, z, w;
            
            x = b[n-2] - a[n-1];
            if(x > 0)
                mp[x]++;
            y = b[n-2] - a[n-2];
            if(y > 0)
                mp[y]++;
            z = b[0] - a[1];
            if(z > 0)
                mp[z]++;
            w = b[0] - a[0];
            if(w > 0)
                mp[w]++;
            FOR(it, mp){
                if((it.se)>1)
                    ans = min(ans, it.fi);
            }
        }
        cout << ans << '\n';
    }
    return 0;
}
