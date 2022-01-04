//Link to question
//"https://leetcode.com/problems/generate-parentheses/"

class Solution {
public:
    vector<string> vs;
    void any(string s, int x, int y, int n){
        if(s.size() == n){
            vs.push_back(s);
            return;
        }    
        if(x < n/2){
            s.push_back('(');
            any(s, x+1, y, n);
            s.pop_back();
            if(x > y){
                s.push_back(')');
                any(s, x, y+1, n);
            }
        }
        else{
            s.push_back(')');
            any(s, x, y+1, n);
        }
    }
    
    vector<string> generateParenthesis(int n) {
        string s;
        any(s, 0, 0, n*2);
        return vs;
    }
};