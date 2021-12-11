//Link to question
//"https://codeforces.com/contest/1608/problem/B"

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
        ll n, a, b;
        cin >> n >> a >> b;
        if(a+b > n-2 or abs(a-b) > 1) con(-1);
        vl ans(n);
        F0r(i, n) ans[i] = i+1;
        if(a > b){
            reverse(all(ans));
        }
        ll ma = max(a, b);
        F0r(i, n){
            if(ma == 0)break;
            swap(ans[i], ans[i+1 < n?i+1:i]);
            ma--;
            i++;
        }
        if(a == b and a != 0) swap(ans[n-1], ans[n-2]);
        F0r(i, n) cout << ans[i] << ' ';
        cout << '\n';
    }
    return 0;
}