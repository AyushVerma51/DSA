class Solution {
public:
    int numberOfSubstrings(string s) {
        vector<int> mpp(3,0);
        int l=0, r=0, cnt=0;
        int unique_char=0;

        while(r<s.size()){
            if(mpp[s[r] - 'a']==0){
                unique_char++;
            }
            mpp[s[r] - 'a']++;
            while(unique_char==3){
                cnt+= (s.size() - r);
                mpp[s[l] - 'a']--;
                if(mpp[s[l] - 'a']==0){
                    unique_char--;
                }
                l++;
            }
            r++;
        }
        return cnt;
    }
};