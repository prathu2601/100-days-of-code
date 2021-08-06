//Link to question
//"https://codeforces.com/problemset/problem/1433/D"

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
        ll n;
        cin >> n;
        ll a[n];
        F0r(i, n) cin >> a[i];
        ll j = 0;
        vector<pair<ll, ll> > vp;
        F0r(i, n){
            if(a[i] != a[0]){
                j = i+1;
                vp.push_back({1, i+1});
            }
        }
        if(!j)
            cout << "NO\n";
        else{
            For(i, 1, n){
                if(a[i] == a[0])
                    vp.push_back({j, i+1});
            }
            cout << "YES\n";
            for(auto [x, y]:vp)
                cout << x << ' ' << y << '\n';
        }
    }
    return 0;
}