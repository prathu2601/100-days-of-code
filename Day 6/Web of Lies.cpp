//Link to question
//"https://codeforces.com/contest/1549/problem/C"

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

    ll n, m, q, ans = 0;
    cin >> n >> m;
    ll a[n];
    memset(a, 0, sizeof(a));
    F0r(i, m){
        ll x, y;
        cin >> x >> y;
        if(x > y) swap(x, y);
        if(a[x] == 0) ans++;
        a[x]++;
    }
    cin >> q;
    while(q--){
        ll x;
        cin >> x;
        if(x == 3)
            cout << n-ans << '\n';
        else if(x == 1){
            ll y, z;
            cin >> y >> z;
            if(y > z) swap(y, z);
            if(a[y] == 0) ans++;
            a[y]++;
        }
        else{
            ll y, z;
            cin >> y >> z;
            if(y > z) swap(y, z);
            if(a[y] == 1) ans--;
            a[y]--;
        }
    }
    return 0;
}