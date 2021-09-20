//Link to question
//"https://codeforces.com/problemset/problem/1370/C"

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
    cin >> t;
    while(t--){
        ll n;
        cin >> n;
        if(n == 1)
            cout << "FastestFinger\n";
        else if(n%2 or n == 2)
            cout << "Ashishgup\n";
        else{
            ll flag = 0, x = 0;
            while(n%2==0) n/=2, x++;
            for(ll i=3; i*i<=n; i+=2){
                while(n%i==0){
                    n/=i;
                    flag++;
                }
            }
            if(n>1)
                flag++;
            if(flag > 0){
                if(flag == 1 and x == 1)
                    cout << "FastestFinger\n";
                else
                    cout << "Ashishgup\n";
            }
            else{
                cout << "FastestFinger\n";
            }
        }
    }
    return 0;
}
