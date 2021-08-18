//Link to question
//"https://codeforces.com/problemset/problem/1447/B"

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
        ll n, m;
        cin >> n >> m;
        ll a[n][m], flag = 0, neg = 0, sum = 0, mi = INT_MAX;
        F0r(i, n){
            F0r(j, m){
                cin >> a[i][j];
                if(a[i][j] == 0)
                    flag = 1;
                else if(a[i][j] < 0){
                    mi = min(mi, -a[i][j]);
                    sum -= a[i][j];
                    neg++;
                }
                else{
                    sum += a[i][j];
                    mi = min(mi, a[i][j]);
                }
            }
        }
        if(flag)
            cout << sum << "\n";
        else{
            if(neg%2){
                cout << sum - mi*2;
            }
            else
                cout << sum;
            cout << "\n";
        }   
    }
    return 0;
}