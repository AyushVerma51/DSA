class Solution {
public:
    int maxSubarrayLength(vector<int>& nums, int k) {
        unordered_map<int,int> f;
        int left=0;
        int maxlen=0;
        for(int right=0;right<nums.size();right++){
            f[nums[right]]++;
            while(f[nums[right]]>k){
                f[nums[left]]--;
                left++;
            }
            maxlen= max(maxlen, right-left+1);
        }
        return maxlen;
    }
};