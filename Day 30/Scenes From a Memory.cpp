//Link to question
//"https://codeforces.com/contest/1562/problem/B"

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
#define MAXN 100005

ll spf[MAXN];

void sieve(){
    spf[1] = 1;
    for (ll i=2; i<MAXN; i++)
  
        spf[i] = i;
  
    for (ll i=4; i<MAXN; i+=2)
        spf[i] = 2;
  
    for (ll i=3; i*i<MAXN; i++)
    {
        if (spf[i] == i)
        {
            for (ll j=i*i; j<MAXN; j+=i)
  
                if (spf[j]==j)
                    spf[j] = i;
        }
    }
}


void solve(string s, ll k){
    vector<ll> v = {1, 4, 6, 8, 9};
    F0r(j, 5){    
        F0r(i, k){
            if(v[j] == s[i]-'0'){
                cout << "1" << '\n';
                cout << v[j] << '\n';
                return;
            }
        }
    }
    F0r(i, k){
        For(j, i+1, k){
            ll a = (s[i]-'0')*10 + (s[j]-'0');
            if(spf[a] != a){
                cout << "2\n";
                cout << a << '\n';
                return;
            }
        }
    }
    F0r(q, k){
        F0r(i, k){
            For(j, i+1, k){
                ll a = (s[i] - '0')*100 + (s[i]-'0')*10 + (s[j]-'0');
                if(spf[a] != a){
                    cout << "3\n";
                    cout << a << '\n';
                    return;
                }
            }
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
        ll k;
        cin >> k;
        string s;
        cin >> s;
        solve(s, k);
    }
    return 0;
}


