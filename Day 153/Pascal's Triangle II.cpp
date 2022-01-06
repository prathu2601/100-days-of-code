//Link to question
//"https://leetcode.com/problems/pascals-triangle-ii/"

class Solution {
public:
    vector<int> getRow(int n) {
        vector<int> ans, v;
        v.push_back(1);
        int x = 2;
        for(int i=0; i<n; i++){
            ans = v;
            v.clear();
            v.push_back(1);
            for(int j = 0; j < x-2; j++){
                v.push_back(ans[j]+ans[j+1]);
            }
            v.push_back(1);
            x++;
        }
        return v;
    }
};