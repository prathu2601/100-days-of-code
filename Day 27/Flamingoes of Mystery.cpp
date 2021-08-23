//Link to question 
//"https://codeforces.com/problemset/problem/1425/F"

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
    
    ll n;
    scanf("%lld", &n);
    ll a[n], b[n];
    memset(a, 0, sizeof(a));
    memset(b, -1, sizeof(b));
    printf("? 1 %d\n", n);
    fflush(stdout);
    ll x, z, q;
    scanf("%lld", &x);
    z = x;
    F0r(i, n-2){
        printf("? 1 %d\n", n-i-1);
        fflush(stdout);
        scanf("%lld", &q);
        a[n-i-1] = x - q;
        b[n-i-1] = 1;
        x = q;
    }
    printf("? 2 %lld\n", n);
    fflush(stdout);
    scanf("%lld", &q);
    a[0] = z - q;
    b[0] = 1;
    ll s = 0;
    F0r(i, n){
        if(b[i] != -1)
            s += a[i];
    }
    printf("!");
    F0r(i, n){
        if(b[i] != -1)
            printf(" %lld", a[i]);
        else
            printf(" %lld", z - s);
    }
    cout << "\n";
    fflush(stdout);
    return 0;
}