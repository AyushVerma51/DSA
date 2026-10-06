class Solution {
public:
    int minAddToMakeValid(string s) {
        int ans=0;
        int bal=0;
        for(char c:s){
            if(c=='('){
                bal++;
            }else{
                if(bal>0){
                    bal--;
                }else{
                    ans++;
                }
            }
        }
        return ans + bal;
    }
};