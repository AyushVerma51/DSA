class Solution {
public:
    int scoreOfParentheses(string s) {
        int score=0;
        int bal=0;
        for(int i=0;i<s.length();i++){
            if(s[i]=='('){
                bal++;
            }else{
                bal--;
                if(s[i-1]=='('){
                    score += (1<<bal);
                }
            }
        }
        return score;
    }
};