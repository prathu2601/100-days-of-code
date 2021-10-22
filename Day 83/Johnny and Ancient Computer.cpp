//Link to question
//"https://codeforces.com/problemset/problem/1362/A"

#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define For(i, a, b) for(ll i=a; i<(b); i++)
#define F0r(i, a) for(ll i=0; i<(a); i++)
#define Forr(i, a, b) for(ll i = (b)-1; i >= a; i--)
#define F0rr(i, a) for(ll i = (a)-1; i >= 0; i--)
#define FOR(it, a) for(auto it:(a))
#define all(a) (a).begin(), (a).end()
#define rall(a) (a).rbegin(), (a).rend()
#define max(a, b) ((a > b)?(a):(b))
#define min(a, b) ((a < b)?(a):(b))
#define pb(x) push_back((x))
#define mp(x, y) make_pair(x, y)
#define sz(a) (a).size()
#define fi first
#define se second
#define vl vector<ll>
#define vll vector<vl>
#define pl pair<ll,ll>
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
        ll a, b;
        cin >> a >> b;
        ll flag = 0, z = 0;
        if(a > b){
            while(a >= b){
                if(a == b){
                    flag = 1;
                    break;
                }
                if(a%8 == 0 and a/8 >= b){
                    z++;
                    a/=8;
                }
                else if(a%4 == 0 and a/4 >= b){
                    z++;
                    a/=4;
                }
                else{
                    if(a/2 >= b and a%2 == 0){
                        z++;
                        a/=2;
                    }
                    else
                        break;
                }
            }
        }
        else{
            while(a <= b){
                if(a == b){
                    flag = 1;
                    break;
                }
                if(a*8 <= b){
                    z++;
                    a*=8;
                }
                else if(a*4 <= b){
                    a*=4;
                    z++;
                }
                else{
                    if(a*2 <= b){
                        z++;
                        a*=2;
                    }
                    else
                        break;
                }
            }
        }
        if(!flag) cout << "-1\n";
        else cout << z << '\n';
    }
    return 0;
}