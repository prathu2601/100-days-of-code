//Link to question
//"https://codeforces.com/problemset/problem/1550/C"

#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define For(i, a, b) for(ll i=a; i<(b); i++)
#define F0r(i, a) for(ll i=0; i<(a); i++)
#define Forr(i, a, b) for(ll i = (b)-1; i >= a; i--)
#define F0rr(i, a) for(ll i = (a)-1; i >= 0; i--)
#define all(a) (a).begin(), (a).end()
#define max(a, b) ((a > b)?(a):(b))
#define min(a, b) ((a < b)?(a):(b))
#define MOD 1000000007
#define DOM 998244353

ll any(vector<ll> v){
    ll n = v.size();
    F0r(i, n){
        For(j, i+1, n){
            For(k, j+1, n){
                if(min(v[i], v[k]) <= v[j] and max(v[i], v[k]) >= v[j])
                    return 0;
            }
        }
    }
    return 1;
}

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
        vector<ll> a(n);
        F0r(i, n) cin >> a[i];
        ll ans = 2*n-1;
        F0r(i, n-2){
            ans += any(vector<ll>(a.begin()+i, a.begin()+i+3));
        }
        F0r(i, n-3){
            ans += any(vector<ll>(a.begin()+i, a.begin()+i+4));
        }
        cout << ans << '\n';
    }
    return 0;
}