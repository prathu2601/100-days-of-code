//Link to question
//"https://codeforces.com/contest/1582/problem/C"

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
        ll n;
        cin >> n;
        string s;
        cin >> s;
        map<char, ll> mp;
        F0r(i, n){
            mp[s[i]]++;
        }
        ll ans = MOD, x = 0;
        F0r(i, n/2){
            if(s[i]!=s[n-i-1])
                x = 1;
        }
        if(x == 0)
            ans = 0;
        FOR(it, mp){
            ll flag = 0, i = 0, j = n-1, d = 0;
            while(i < j){
                if(s[i]!=s[j]){
                    if(s[i]==it.fi){
                        d++;
                        i++;
                    }
                    else if(s[j]==it.fi){
                        d++;
                        j--;
                    }
                    else{
                        flag = 1;
                        break;
                    }
                }
                else{
                    i++;
                    j--;
                }
            }
            if(!flag)
                ans = min(ans, d);
        }
        cout << (ans==MOD?-1:ans) << '\n';
    }
    return 0;
}