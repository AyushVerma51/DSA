class Solution {
public:
    int scoreOfParentheses(string s) {
        stack<int> st;
        int curr_score=0;
        for(char c:s){
            if(c=='('){
                st.push(curr_score);
                curr_score=0;
            }else{
                int inner_score= curr_score;
                int base_score= (inner_score == 0) ? 1: 2* inner_score;
                curr_score= st.top() + base_score;
                st.pop();
            }
        }
        return curr_score;
    }
};