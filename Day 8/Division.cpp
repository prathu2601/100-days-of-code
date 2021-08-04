//Link to question
//"https://codeforces.com/problemset/problem/1444/A"

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

    ll t;
    cin >> t;
    while(t--){
        ll n, k;
        cin >> n >> k;
        if(n%k)
            cout << n << '\n';
        else{
            vector<ll> a;
            ll x = k;
            if(k%2 == 0)
                a.push_back(2);
            while(k%2 == 0){ 
                k /= 2;
            }
            for(int i=3; i*i<=k; i+=2){
                if(k%i == 0)
                    a.push_back(i);
                while(k%i == 0){ 
                    k /= i;
                }
            }
            if(k > 1)
                a.push_back(k);
            ll ans = 0;
            for(auto it:a){
                ll z = n;
                while(z%x == 0) z/=it;
                ans = max(ans, z);
            }
            cout << ans << '\n';
        }
    }
    return 0;
}