//Link to question
//"https://leetcode.com/problems/jump-game-ii/"

class Solution {
public:
    int jump(vector<int>& a) {
        int n = a.size(), ans = 1;
        if(n == 1) return 0;
        for(int i = 0; i<n; i++){
            int x = i+a[i], y = i+a[i];
            if(y >= n-1) break;
            for(int j = i+1; j<=i+a[i]; j++){
                if(a[j]+j >= y){
                    y = a[j]+j;
                    x = j;
                }
            }
            i = x-1;
            ans++;
            if(y >= n-1) break;
        }
        return ans;
    }
};