//Link to question
//"https://codeforces.com/problemset/problem/1278/B"

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
    ll a[100002];
    a[1] = 1;
    For(i, 2, 100001) a[i] = a[i-1]+i;
    while(t--){
        ll c, b;
        cin >> c >> b;
        if(c > b)
            swap(c, b);
        if(c == b)
            cout << "0\n";
        else{
            ll q = b - c;
            For(i, 1, 100001){
                if(a[i] >= q){
                    if(a[i]-q == 0)
                        cout << i << '\n';
                    else if((a[i]-q)%2)
                        continue;
                    else
                        cout << i << '\n';
                    break;
                }
            }
        }
    }
    return 0;
}