//Link to question
//"https://codeforces.com/problemset/problem/1468/N"

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
        ll c1, c2, c3, a1, a2, a3, a4, a5;
        cin >> c1 >> c2 >> c3 >> a1 >> a2 >> a3 >> a4 >> a5;
        if(a1 < c1){
            if(a1+a4 <= c1){
                a1 += a4;
                a4 = 0;
            }
            else{
                a4 -= c1-a1;
                a1 = c1;
            }
        }
        if(a2 < c2){
            if(a2+a5 <= c2){
                a2 += a5;
                a5 = 0;
            }
            else{
                a5 -= c2-a2;
                a2 = c2;
            }
        }
        if(a1 <= c1 and a2 <= c2 and a3+a4+a5 <= c3)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}