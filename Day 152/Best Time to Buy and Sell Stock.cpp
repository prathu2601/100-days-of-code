//Link to question
//"https://leetcode.com/problems/best-time-to-buy-and-sell-stock/"

class Solution {
public:
    int maxProfit(vector<int>& c) {
        int n = c.size(), ans = 0;
        vector<int> a, b;
        int x = INT_MAX, y = INT_MIN;
        for(int i = 0; i<n; i++){
            x = min(x, c[i]);
            a.push_back(x);
        }
        for(int i = n-1; i>=0; i--){
            y = max(y, c[i]);
            b.push_back(y);
        }
        reverse(b.begin(), b.end());
        for(int i = 0; i<n; i++){
            ans = max(ans, b[i]-a[i]);
        }
        return ans;
    }
};