//Link to question
//"https://codeforces.com/problemset/problem/1368/B"

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
    t = 1;
    while(t--){
        ll n;
        cin >> n;
        ll x = 1;
        string s = "codeforces";
        while(pow(x, 10) < n){
            x++;
        }
        if(pow(x, 10) == n){
            F0r(i, 10) F0r(j, x) cout << s[i];
        }
        else{
            ll y=0;
            while(pow(x, y)*(pow(x-1, 10-y)) < n) y++;
            F0r(i, 10){
                F0r(j, x-1) cout << s[i];
                if(i < y) cout << s[i];
            } 
            //cout << x << ' ' << y << ' ';
        }
    }
    return 0;
}
