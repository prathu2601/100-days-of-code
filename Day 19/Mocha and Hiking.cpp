//Link to question
//"https://codeforces.com/contest/1559/problem/C"

#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define For(i, a, b) for(ll i=a; i<(b); i++)
#define F0r(i, a) for(ll i=0; i<(a); i++)
#define Forr(i, a, b) for(ll i = (b)-1; i >= a; i--)
#define F0rr(i, a) for(ll i = (a)-1; i >= 0; i--)
#define each(it, a) for(auto it:a)
#define all(a) (a).begin(), (a).end()
#define max(a, b) ((a > b)?(a):(b))
#define min(a, b) ((a < b)?(a):(b))
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
        ll a[n], flag = 0, j = -1;
        F0r(i, n){ 
            cin >> a[i];
            if(a[i] == 1 and !flag){
                flag = 1;
                j = i;
            }
        }
        if(!flag){
            F0r(i, n) cout << i+1 << ' ';
            cout << n+1 << '\n';
        }
        else{
            F0r(i, n){
                if(i == j){
                    cout << n+1 << ' ' << i+1 << ' '; 
                }
                else
                    cout << i+1 << ' ';
            }
            cout << '\n';
        }
    }
    return 0;
}