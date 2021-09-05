//Link to question
//"https://codeforces.com/contest/1567/problem/B"

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
        ll a, b;
        cin >> a >> b;
        a--;
        ll an = 0;
        if(a%4 == 0)
            an = a;
        else if(a%4 == 1)
            an = 1;
        else if(a%4 == 2)
            an = a+1;
        else
            an = 0;
        a++;
        if(an == b){
            cout << a << '\n';
        }
        else{
            bitset<32> x(an), y(b);
            ll ans = 0;
            F0r(i, 32){
                if(x[i] != y[i])
                    ans += pow(2, i);
            }
            cout << a + (ans==a ?2 : 1) << '\n';
        }
    }
    return 0;
}
