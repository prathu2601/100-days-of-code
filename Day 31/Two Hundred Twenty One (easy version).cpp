//Link to question
//"https://codeforces.com/contest/1562/problem/D1"

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
    cin >> t;
    while(t--){
        ll n, q;
        cin >> n >> q;
        string s;
        cin >> s;
        vector<ll> v(n+1, 0);
        F0r(i, n){
            v[i+1] = v[i];
            if(s[i] == '+'){
                if(i%2){
                    v[i+1]--;
                }
                else
                    v[i+1]++;
            }
            else{
                if(i%2){
                    v[i+1]++;
                }
                else
                    v[i+1]--;
            }
        }
        while(q--){
            ll l, r;
            cin >> l >> r;
            if(v[r] == v[l-1])
                cout << "0\n";
            else if(abs(v[r]-v[l-1])%2)
                cout << "1\n";
            else
                cout << "2\n";
        }
    }
    return 0;
}


