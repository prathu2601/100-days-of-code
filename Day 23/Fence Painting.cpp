//Link to question
//"https://codeforces.com/problemset/problem/1481/C"

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
        ll a[n], b[n], c[m], d[n], flag = 0, ans[m];
        memset(d, 0, sizeof(d));
        memset(ans, 0, sizeof(ans));
        F0r(i, n) cin >> a[i], a[i]--;
        F0r(i, n) cin >> b[i], b[i]--;
        F0r(i, m) cin >> c[i], c[i]--;
        set<ll> st;
        F0r(i, n){
            if(a[i] != b[i]){
                d[b[i]]++;
                st.insert(i);
            }
        }
        F0r(i, m){
            d[c[i]]--;
        }
        F0r(i, n){
            if(d[i] > 0)
                flag = 1;
        }
        if(!flag){
            flag = 1;
            F0r(i, n){
                if(c[m-1] == b[i]){
                    flag = 0;
                    break;
                }
            }
        }
        if(flag)
            cout << "NO\n";
        else{
            cout << "YES\n";
            FOR(it, st){
                //cout << it << ' ';
                F0r(i, m){
                    if(b[it] == c[i] and ans[i] == 0){
                        ans[i] = it+1;
                        //cout << ans[i] << ' ' << i << '\n' ;
                        break;
                    }
                } 
            }
            if(ans[m-1] == 0){
                F0r(i, n){
                    if(c[m-1] == b[i]){
                        ans[m-1] = i+1;
                        break;
                    }
                }
            }
            F0r(i, m){
                if(ans[i] == 0)
                    cout << ans[m-1] << ' ';
                else
                    cout << ans[i] << ' ';
            }
            //cout << ans[m-1] << '\n';
            //cout << '\n';
            cout << "\n";
        }
    }
    return 0;
}