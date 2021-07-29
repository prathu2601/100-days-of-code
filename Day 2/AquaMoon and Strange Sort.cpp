//Link to question
//"https://codeforces.com/problemset/problem/1545/A"

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
        ll n;
        cin >> n;
        ll a[n], b[100001][2];
        memset(b, 0, sizeof(b));
        F0r(i, n) cin >> a[i], b[a[i]][i%2]++;
        sort(a, a+n);
        F0r(i, n) b[a[i]][i%2]--;
        ll flag = 0;
        F0r(i, n){
            if(b[a[i]][0] != 0 or b[a[i]][1] != 0){
                flag = 1;
                break;
            }
        }
        if(flag)
            cout << "NO\n";
        else
            cout << "YES\n";
    }
    return 0;
}