//Link to question
//"https://codeforces.com/problemset/problem/1534/A"

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
        vector<string> vs(n), a(n), b(n);
        F0r(i, n) cin >> vs[i];
        F0r(i, n){
            F0r(j, m){
                if(i%2){
                    if(j%2){
                        a[i].pb('W');
                        b[i].pb('R');
                    }
                    else{
                        a[i].pb('R');
                        b[i].pb('W');
                    }
                }
                else{
                    if(j%2){
                        a[i].pb('R');
                        b[i].pb('W');
                    }
                    else{
                        a[i].pb('W');
                        b[i].pb('R');
                    }
                }
            }
        }
        ll flag = 0;
        F0r(i, n){
            F0r(j, m){
                if(vs[i][j] != '.'){
                    if(vs[i][j] != a[i][j]){
                        flag = 1;
                        break;
                    }
                }
            }
            if(flag)
                break;
        }
        if(!flag){
            cout << "YES\n";
            F0r(i, n){   
                F0r(j, m) 
                    cout << a[i][j];
                cout << '\n';
            }
        }
        else{
            flag = 0;
            F0r(i, n){
                F0r(j, m){
                    if(vs[i][j] != '.'){
                        if(vs[i][j] != b[i][j]){
                            flag = 1;
                            break;
                        }
                    }
                }
                if(flag)
                    break;
            }
            if(flag)
                cout << "NO\n";
            else{
                cout << "YES\n";
                F0r(i, n){   
                    F0r(j, m) 
                        cout << b[i][j];
                    cout << '\n';
                }
            }
        }
    }
    return 0;
}