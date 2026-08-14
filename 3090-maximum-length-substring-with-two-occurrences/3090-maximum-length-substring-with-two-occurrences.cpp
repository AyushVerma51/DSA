class Solution {
public:
    int maximumLengthSubstring(string s) {
        int maxlen=0;
        int l=0;
        int count[26]={0};
        for(int r=0;r<s.size();r++){
            count[s[r] - 'a']++;
            while(count[s[r] - 'a']>2){
                count[s[l] - 'a']--;
                l++;
            }
            maxlen= max(maxlen, r - l +1);
        }
        return maxlen;
    }
};