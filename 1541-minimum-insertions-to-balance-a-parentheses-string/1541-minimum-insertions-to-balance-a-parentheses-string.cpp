class Solution {
public:
    int minInsertions(string s) {
        int res=0;
        int need_right=0;
        for(char c:s){
            if(c=='('){
                if(need_right % 2 != 0){
                    res++;
                    need_right--;
                }
                need_right += 2;
            }else{
                need_right--;
                if(need_right<0){
                    res++;
                    need_right += 2;
                }
            }
        }
        return res + need_right;
    }
};