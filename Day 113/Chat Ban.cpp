//Link to question
//"https://codeforces.com/contest/1612/problem/C"

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
        ll k, x;
        cin >> k >> x;
        if(k*k <= x) cout << 2*k-1 << '\n';
        else if(k*(k+1)/2 >= x){
            ll l = 1, r = k, ans;
            while(l <= r){
                ll mid = (l+r)/2;
                if(mid*(mid+1)/2 >= x) ans = mid, r = mid - 1;
                else l = mid + 1;
            }
            cout << ans << '\n';
        }
        else{
            x -= k*(k+1)/2;
            ll l = 1, r = k-1, ans;
            while(l <= r){
                ll mid = (l+r)/2;
                if((mid + k - 1)*(k - mid)/2 >= x) ans = mid, l = mid + 1;
                else r = mid - 1;
            }
            cout << 2*k-ans << '\n';
        }
    }
    return 0;
}