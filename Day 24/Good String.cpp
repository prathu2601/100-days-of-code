//Link to question
//"https://codeforces.com/problemset/problem/1389/C"

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
        string s;
        cin >> s;
        ll n = s.size();
        ll a[10], ans = 0;
        memset(a, 0, sizeof(a));
        F0r(i, 10){
            F0r(j, 10){
                ll flag = 0, count = 0;
                F0r(k, n){
                    if((s[k]-'0') == i and flag == 0){
                        flag = 1 - flag;
                        count++;
                    }
                    else if((s[k]-'0') == j and flag){
                        flag = 1 - flag;
                        count++;
                    }
                }
                if(flag and i != j)
                    count--;
                ans = max(ans, count);
                //cout << i << ' ' << j << ' ' << count << '\n';
            }
        }

        cout << n-(ans != 1 ? ans : 2) << '\n';
    }
    return 0;
}