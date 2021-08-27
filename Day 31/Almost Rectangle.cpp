//Link to question
//"https://codeforces.com/problemset/problem/1512/B"

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
        ll n;
        cin >> n;
        vector<string> vs(n);
        ll p=-1, q=-1, k=-1, l=-1;
        F0r(i, n){
            cin >> vs[i];
            F0r(j, n){
                if(vs[i][j] == '*'){
                    if(p != -1){
                        k = i;
                        l = j;
                    }
                    else{
                        p = i;
                        q = j;
                    }
                }
            }
        }
        if(p == k){
            if(p == 0)
                vs[n-1][l] = vs[n-1][q] = '*';
            else
                vs[0][l] = vs[0][q] = '*';
        }
        else if(l == q){
            if(l == 0)
                vs[p][n-1] = vs[k][n-1] = '*';
            else
                vs[p][0] = vs[k][0] = '*';
        }
        else
            vs[p][l] = vs[k][q] = '*';
        F0r(i, n){
            F0r(j, n) cout << vs[i][j];
            cout << '\n';
        }
    }
    return 0;
}


