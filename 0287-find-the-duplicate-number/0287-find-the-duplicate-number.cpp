class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int n= nums.size();
        unordered_set <int> st;
        int d=0;
        for(int i=0;i<n;i++){
            if(st.find(nums[i]) != st.end()){
                d=nums[i];
                break;
            }
            st.insert(nums[i]);
        }
        return d;
    }
};