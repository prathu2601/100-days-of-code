//Link to question
//"https://codeforces.com/problemset/problem/1555/D"

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

    ll n, m;
    cin >> n >> m;
    string s;
    cin >> s;
    string a = "abc";
    ll j = 0;
    vector<vector<ll> > v(6, vector<ll>(n+1, 0));
    do{
        F0r(i, n){
            v[j][i+1] = v[j][i] + (s[i] != a[i%3]);
        }
        j++;
    }while(next_permutation(all(a)));
    while(m--){
        ll l, r, ans = INT_MAX;
        cin >> l >> r;
        F0r(i, 6){
            ans = min(ans, v[i][r]-v[i][l-1]);
        }
        cout << ans << '\n';
    }
    return 0;
}