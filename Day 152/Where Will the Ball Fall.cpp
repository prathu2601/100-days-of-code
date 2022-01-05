//Link to question
//"https://leetcode.com/problems/where-will-the-ball-fall/"

class Solution {
public:
    vector<int> findBall(vector<vector<int>>& a) {
        int n = a.size(), m = a[0].size();
        vector<int> ans(m, -1);
        for(int i = 0; i<m; i++){
            int flag = 1, k = i;
            for(int j = 0; j<n; j++){
                if(a[j][k] == 1){
                    if(k == m-1 or a[j][k+1] == -1){
                        flag = 0;
                        break;
                    }
                    else
                        k++;
                }
                else{
                    if(k == 0 or a[j][k-1] == 1){
                        flag = 0;
                        break;   
                    }
                    else
                        k--;
                }
            }
            if(flag)
                ans[i] = k;
        }
        return ans; 
    }
};