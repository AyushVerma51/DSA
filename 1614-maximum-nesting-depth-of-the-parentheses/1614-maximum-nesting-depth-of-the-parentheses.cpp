class Solution {
public:
    int maxDepth(string s) {
        int curr_dept=0;
        int max_dept=0;
        for(char c:s){
            if(c=='('){
                curr_dept++;
                max_dept= max(max_dept,curr_dept);
            }else if(c==')'){
                curr_dept--;
            }
        }
        return max_dept;
    }
};