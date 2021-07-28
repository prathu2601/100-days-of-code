//Link to question
//"https://codeforces.com/problemset/problem/1553/D"

#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define For(i, a, b) for(ll i=a; i<(b); i++)
#define F0r(i, a) for(ll i=0; i<(a); i++)
#define Forr(i, a, b) for(ll i = (b)-1; i >= a; i--)
#define F0rr(i, a) for(ll i = (a)-1; i >= 0; i--)
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
        string s, q;
        cin >> s >> q;
        ll n = s.size(), m = q.size();
        if(m > n)
            cout << "NO\n";
        else{
            string p = s, e = q;
            reverse(p.begin(), p.end());
            s = p;
            reverse(e.begin(), e.end());
            q = e;
            p = p.substr(0, m);
            if(p == e)
                cout << "YES\n";
            else{
                ll i=0, j=0;
                while(i < n and j < m){
                    if(s[i] == q[j]){
                        i++;
                        j++;
                    }
                    else{
                       i+=2;
                    }
                }
                //cout << i << ' ' << j << ' ';
                if(j < m)
                    cout << "NO\n";
                else
                    cout << "YES\n";
            }
        }
    }
    return 0;
}