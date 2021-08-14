//Link to question
//"https://codeforces.com/problemset/problem/1364/B"

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
        vector<ll> ans;
        ans.push_back(a[0]);
        For(i, 1, n-1){
            if((a[i-1]<a[i])!=(a[i]<a[i+1]))
                ans.push_back(a[i]);
        }
        ans.push_back(a[n-1]);
        cout << ans.size() << '\n';
        F0r(i, ans.size()) cout << ans[i] << ' ';
        cout << '\n';
    }
    return 0;
}