//Link to question
//"https://codeforces.com/problemset/problem/1332/A"

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
        ll a, b, c, d, x, y, x1, x2, y1, y2;
        cin >> a >> b >> c >> d >> x >> y >> x1 >> y1 >> x2 >> y2;
        ll flag = 0;
        if(a > b and abs(a-b) > abs(x1-x)) flag = 1;
        if(a < b and abs(a-b) > abs(x2-x)) flag = 1;
        if(c < d and abs(c-d) > abs(y2-y)) flag = 1;
        if(c > d and abs(c-d) > abs(y1-y)) flag = 1;
        if(x1==x2 and (a>0 or b>0)) flag = 1;
        if(y1==y2 and (c>0 or d>0)) flag = 1;
        cout << (flag?"NO":"YES") << '\n';
    }
    return 0;
}