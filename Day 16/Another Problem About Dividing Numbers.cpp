//Link to question
//"https://codeforces.com/problemset/problem/1538/D"

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

ll fac(ll n){
    ll ans = 0;
    while(n%2 == 0){
        ans++;
        n/=2;
    }
    for(ll i=3; i*i<=n; i+=2){
        while(n%i == 0){ 
            ans++; 
            n/=i;
        }
    }
    if(n > 1)
        ans++;
    return ans;
}

void solve(){
    ll a, b, k;
    cin >> a >> b >> k;
    ll count = fac(a);
    count += fac(b);
    if(k == 1){
        if(a==b or (a%b != 0 and b%a != 0)){
            cout << "NO\n";
            return;
        }
    }
    if(count < k){
        cout << "NO\n";
        return;
    }
    cout << "YES\n";
}

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
    while(t--)
        solve();
    return 0;
}