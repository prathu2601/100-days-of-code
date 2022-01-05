//Link to question
//"https://leetcode.com/problems/reducing-dishes/"

class Solution {
public:
    int maxSatisfaction(vector<int>& a) {
        int n = a.size();
        sort(a.rbegin(), a.rend());
        vector<int> b;
        int x = 0;
        for(int i=0; i<n; i++){
            x += a[i];
            b.push_back(x);
        }
        int ans = 0;
        for(int i = 0; i<n; i++){
            ans = max(ans, b[i]+ans);
        }
        return ans;
    }
};