class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        unordered_set<int> num_set(nums.begin(), nums.end());
        int curr_multiple=k;
        while(num_set.count(curr_multiple)){
            curr_multiple+=k;
        }
        return curr_multiple;
    }
};