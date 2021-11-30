//Link to question
//"https://codeforces.com/problemset/problem/1609/C"

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
#define MAXN 1000005

ll spf[MAXN];

void sieve(){
    spf[1] = 1;
    for(ll i=2; i<MAXN; i++)
        spf[i] = i;
  
    for(ll i=4; i<MAXN; i+=2)
        spf[i] = 2;
  
    for(ll i=3; i*i<MAXN; i++){
        if(spf[i] == i){
            for(ll j=i*i; j<MAXN; j+=i)
                if (spf[j]==j)
                    spf[j] = i;
        }
    }
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    sieve();

    ll t;
    cin >> t;
    while(t--){
        ll n, e;
        cin >> n >> e;
        vl a(n), l(n), r(n);
        F0r(i, n) cin >> a[i];
        F0r(j, e){
            ll count = 0, i = j;
            while(i < n){
                if(a[i] != 1){
                    l[i] = count + 1;
                    count = 0;
                }
                else count++;
                i += e;
            }
            i -= e;
            count = 0;
            while(i >= 0){
                if(a[i] != 1){
                    r[i] = count+1;
                    count = 0;
                }
                else count++;
                i -= e;
            }
        }
        ll ans = 0;
        F0r(i, n){
            if(spf[a[i]] == a[i] and a[i] != 1){
                ans += l[i]*r[i]-1;
            }   
        }
        cout << ans << '\n';
    }
    return 0;
}