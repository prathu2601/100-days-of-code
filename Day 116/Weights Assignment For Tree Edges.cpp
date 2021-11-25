//Link to question
//"https://codeforces.com/contest/1611/problem/D"

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
        ll n;
        cin >> n;
        vl b(n), p(n), c(n);
        ll x = -1;
        F0r(i, n) cin >> b[i], b[i]--, (x==-1?(b[i]==i?x=i:x=-1):x);
        F0r(i, n) cin >> p[i], p[i]--, c[p[i]] = i;
        ll flag = 0;
        F0r(i, n) if(x!=i and c[i] < c[b[i]]) flag = 1;
        if(flag) cout << "-1\n";
        else F0r(i, n) cout << c[i]-c[b[i]] << " \n"[i==n-1];
    }
    return 0;
}