//Link to question
//"https://practice.geeksforgeeks.org/problems/alien-dictionary/1/?category[]=Graph&category[]=Graph&problemStatus=unsolved&page=1&query=category[]GraphproblemStatusunsolvedpage1category[]Graph#"


#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++

class Solution{
    public:
    vector<int> v[305];
    bool b[305];
    
    void dfs(int i, stack<int> &a){
        b[i] = true;
        for(auto it:v[i]){
            if(!b[it]){
                dfs(it, a);
            }
            //cout << it << ' ';
        }
        a.push(i);
    }
    
    string ans(int k){
        stack<int> a;
        for(int i=0; i<k; i++){
            if(!b[i]){
                dfs(i, a);
            }
        }
        string s;
        while(!a.empty()){
            int it = a.top();a.pop();
            s += char('a'+it);
        }
        //cout << s << ' ';
        return s;
    }
    
    string findOrder(string dict[], int n, int k) {
        for(int i=0; i<n-1; i++){
            string s1 = dict[i], s2 = dict[i+1];
            for(int j=0; j<min(s1.size(), s2.size()); j++){
                if(s1[j] != s2[j]){
                    v[s1[j]-'a'].push_back(s2[j]-'a');
                    break;
                }
            }
        }
        memset(b, false, sizeof(b));
        
        return ans(k);
    }
};

// { Driver Code Starts.
string order;
bool f(string a, string b) {
    int p1 = 0;
    int p2 = 0;
    for (int i = 0; i < min(a.size(), b.size()) and p1 == p2; i++) {
        p1 = order.find(a[i]);
        p2 = order.find(b[i]);
        //	cout<<p1<<" "<<p2<<endl;
    }

    if (p1 == p2 and a.size() != b.size()) return a.size() < b.size();

    return p1 < p2;
}

// Driver program to test above functions
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N, K;
        cin >> N >> K;
        string dict[N];
        for (int i = 0; i < N; i++) cin >> dict[i];
        
        Solution obj;
        string ans = obj.findOrder(dict, N, K);
        order = "";
        for (int i = 0; i < ans.size(); i++) order += ans[i];

        string temp[N];
        std::copy(dict, dict + N, temp);
        sort(temp, temp + N, f);

        bool f = true;
        for (int i = 0; i < N; i++)
            if (dict[i] != temp[i]) f = false;

        if(f)cout << 1;
        else cout << 0;
        cout << endl;
    }
    return 0;
}