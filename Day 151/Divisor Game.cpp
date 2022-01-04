//Link to question
//"https://leetcode.com/problems/divisor-game/"

class Solution {
public:
    bool divisorGame(int n) {
        if(n == 1) return 0;
        vector<int> v(n+1, 0);
        v[2] = 1;
        v[1] = 0;
        for(int i = 3; i<=n; i++){
            int x = i, z = 0;
            for(int j = 1; j < x; j++){
                if(x%j == 0){
                    if(v[x-j] == 0){
                        z = 1;
                        break;
                    }
                }
            }
            v[i] = z;
        }
        return v[n];
    }
};