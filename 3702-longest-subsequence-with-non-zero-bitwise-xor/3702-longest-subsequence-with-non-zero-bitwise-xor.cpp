class Solution {
public:
    int longestSubsequence(vector<int>& nums) {
        int Xor=0;
        int count=0;
        for(int num: nums){
            Xor ^= num;
            if(num>0){
                count++;
            }
        }
        if(Xor!=0){
            return nums.size();
        }
        if(count>0){
            return nums.size()-1;
        }
        return 0;
    }
};