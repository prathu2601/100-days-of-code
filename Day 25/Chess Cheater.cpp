//Link to question 
//"https://codeforces.com/problemset/problem/1427/B"

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
        ll n, k;
        cin >> n >> k;
        string s;
        cin >> s;
        ll count = 0, ans = 0, x = 0;
        vector<ll> v;
        F0r(i, n){
            ans += s[i]=='W';
        }
        if(k >= n-ans){
            cout << 2*n-1 << '\n';
            continue;
        }
        if(ans == 0){
            cout << max(2*k - 1, 0) << '\n';
            continue;
        }
        F0r(i, n-1){
            ans += s[i+1] == 'W' and s[i] == 'W';
        }
        F0r(i, n){
            if(s[i] != 'L'){
                if(count > 0){
                    if(count == i)
                        x+=count;
                    else
                        v.pb(count);
                    count = 0;
                }
            }
            else
                count++;
        }
        x += count;
        sort(all(v));
        FOR(it, v){
            if(k >= it){
                k-=it;
                ans += it*2+1;
            }
            else{
                ans += k*2;
                k = 0;
                break;
            }
            if(k == 0)
                break;
        }
        ans += k*2;
        cout << ans << '\n';
    }
    return 0;
}