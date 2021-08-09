//Link to question
//"https://codeforces.com/contest/1557/problem/B"

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
        ll a[n], b[n];
        F0r(i, n) cin >> a[i], b[i] = a[i];
        sort(b, b+n);
        ll count = 0, j;
        F0r(i, n){
            ll q = lower_bound(b, b+n, a[i]) - b;
            j = i;
            while(a[j] == b[q] and j < n and q < n){
                j++;
                q++;
            }
            count++;
            i = j-1;
        }
        if(count > k){
            cout << "NO\n";
        }
        else
            cout << "YES\n";
    }
    return 0;
}