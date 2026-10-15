class Solution {
public:
    int sumCounts(vector<int>& nums) {
        int n= nums.size();
        int totalSum=0;
        for(int i=0;i<n;i++){
            unordered_set<int> dist_element;
            for(int j=i;j<n;j++){
                dist_element.insert(nums[j]);
                int cnt= dist_element.size();
                totalSum += cnt * cnt;
            }
        }
        return totalSum;
    }
};