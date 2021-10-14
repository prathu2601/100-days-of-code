//Link to question
//"https://codeforces.com/problemset/problem/1395/A"

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
        ll r, g, b, w;
        cin >> r >> g >> b >> w;
        ll z = 0, flag = 0;
        if(r%2)z++;
        if(g%2)z++;
        if(b%2)z++;
        if(w%2)z++;
        if(z<=1)
            flag = 1;
        else if(r>0 and b>0 and g>0 and ((r-1)%2+(g-1)%2+(b-1)%2+(w+1)%2)<=1)
            flag = 1;
        if(!flag)
            cout << "NO\n";
        else cout << "YES\n";
    }
    return 0;
}