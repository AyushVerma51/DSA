class Solution {
public:
    string reverseParentheses(string s) {
        vector<char> st;
        for(char ch:s){
            if(ch==')'){
                string temp="";
                while(!st.empty() && st.back() != '('){
                    temp += st.back();
                    st.pop_back();
                }
                if(!st.empty()){
                    st.pop_back();
                }
                for(char ch_t:temp){
                    st.push_back(ch_t);
                }
            }else{
                st.push_back(ch);
            }
        }
        return string(st.begin(), st.end());
    }
};