//Link to question
//"https://codeforces.com/problemset/problem/1611/F"

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
        ll n, s;
        cin >> n >> s;
        vl a(n);
        F0r(i, n) cin >> a[i];
        ll i = 0, j = 0, sum = 0, an1 = -1, an2 = -1, ma = 0;
        while(i < n and j < n){
            if(i == j){
                while(a[i]+s < 0 and i < n) i++, j++;
                if(i == n) break;
                sum = a[i];
                j++;
            }
            else if(j == n){
                sum -= a[i];
                i++;
            }
            else if(sum+s+a[j] < 0){
                sum -= a[i];
                i++;
            }
            else{
                sum += a[j];
                j++;
            }
            if(an2 - an1 < j - i and sum+s >= 0){
                an1 = i;
                an2 = j;
            }
        }
        if(an1 == -1) cout << an2 << '\n';
        else cout << an1+1 << ' ' << an2 << '\n';
    }
    return 0;
}