class Solution {
public:
    string reverseVowels(string s) {
        int left=0;
        int right= s.size()-1;
        string v= "aeiouAEIOU";
        while(left<right){
            while(left<right && v.find(s[left])== string::npos){
                left++;
            }
            while(left<right && v.find(s[right])== string::npos){
                right--;
            }
            if(left<right){
                swap(s[left], s[right]);
                left++;
                right--;
            }
        }
        return s;
    }
};