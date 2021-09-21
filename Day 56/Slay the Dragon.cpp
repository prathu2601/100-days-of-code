//Link to question
//"https://codeforces.com/contest/1574/problem/C"

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
#define sz(a) (s).size()
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
    //cin >> t;
    t=1;
    while(t--){
        ll n, m;
        cin >> n;
        ll a[n], sum = 0;
        set<ll> st;
        F0r(i, n) cin >> a[i], sum += a[i], st.insert(a[i]);
        sort(a, a+n);
        cin >> m;
        F0r(i, m){
            ll x, y, z;
            cin >> x >> y;
            auto it = st.lower_bound(x);
            if(it != st.end()){
                ll de, ans;
                z  = sum - *it;
                if(z >= y)
                    cout << "0\n";
                else{
                    if(it == st.begin())
                        cout << y - z << '\n';
                    else{
                        ans = y-z;
                        auto itr = it;
                        itr--;
                        ll at = x - *itr;
                        z += (*it - *itr);
                        if(z > y)
                            de = 0;
                        else de = y - z;
                        ans = min(ans, at+de);
                        cout << ans << '\n';
                    }
                }
            }
            else{
                it--;
                ll at, de, z, ans;
                at = x - *it;
                z = sum - *it;
                if(z >= y)
                    de = 0;
                else de =  y - z;
                cout << at + de << '\n';
            }
        }
    }
    return 0;
}
