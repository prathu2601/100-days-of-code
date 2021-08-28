//Link to question
//"https://www.codechef.com/LTIME99B/problems/CROSBLK"

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
        ll n;
        cin >> n;
        ll a[n], count = 0;
        F0r(i, n) cin >> a[i];
        ll ma[n];
        ma[n-1] = a[n-1];
        F0rr(i, n-1){
            ma[i] = max(a[i], ma[i+1]);
        } 
        if(ma[0] != a[0])
            cout << "-1\n";
        else{
            F0rr(i, n-1){
                if(ma[i] != ma[i+1])
                    count++;
            }
            if(ma[0] == ma[1])
                count++;
            cout << (count==0 ? 1 : count) << '\n';
        }
    }
    return 0;
}
