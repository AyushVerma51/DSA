class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<int> res;
        for(size_t i=0; i<nums.size() - 1;i++){
            for(int miss= nums[i] + 1; miss<nums[i+1]; miss++){
                res.push_back(miss);
            }
        }
        return res;
    }
};