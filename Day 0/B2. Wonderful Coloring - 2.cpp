#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define For(i, a, b) for(ll i=a; i<(b); i++)
#define F0r(i, a) for(ll i=0; i<(a); i++)
#define Forr(i, a, b) for(ll i = (b)-1; i >= a; i--)
#define F0rr(i, a) for(ll i = (a)-1; i >= 0; i--)
#define all(a) (a).begin(), (a).end()
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
        ll a[n], ans[n], count=0;
        map <ll, vector<ll> > mp;
        F0r(i, n){ 
            cin >> a[i];
            if(mp[a[i]].size() < k){
                mp[a[i]].push_back(i);
                count++;
            }
        }
        memset(ans, 0, sizeof(ans));
        auto it = mp.begin();
        F0r(i, count/k){
            ll h = 1;
            while(h <= k){
                if(it->second.empty())
                    it++;
                ans[it->second.back()] = h++;
                it->second.pop_back();
            }
        }
        F0r(i, n) cout << ans[i] << ' ';
        cout << '\n';
    }
    return 0;
}