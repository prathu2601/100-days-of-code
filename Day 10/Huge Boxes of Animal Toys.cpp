//Link to question
//"https://codeforces.com/problemset/problem/1425/H"

#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define For(i, a, b) for(ll i=a; i<(b); i++)
#define F0r(i, a) for(ll i=0; i<(a); i++)
#define Forr(i, a, b) for(ll i = (b)-1; i >= a; i--)
#define F0rr(i, a) for(ll i = (a)-1; i >= 0; i--)
#define all(a) (a).begin(), (a).end()
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
        ll a, b, c, d;
        cin >> a >> b >> c >> d;
        ll n = a + b, p = c + d;
        if(n % 2){
            if(a or d)
                cout << "Ya ";
            else
                cout << "Tidak ";
            if(b or c)
                cout << "Ya ";
            else
                cout << "Tidak ";
            cout << "Tidak ";
            cout << "Tidak";
        }
        else{
            cout << "Tidak ";
            cout << "Tidak ";
            if(b or c)
                cout << "Ya ";
            else
                cout << "Tidak ";
            if(a or d)
                cout << "Ya ";
            else
                cout << "Tidak";
        }
        cout << '\n';
    }
    return 0;
}