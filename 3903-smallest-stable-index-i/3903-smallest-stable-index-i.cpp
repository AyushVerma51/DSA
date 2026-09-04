class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        int n= nums.size();
        if(n==0) return -1;
        vector<int> p_max(n);
        vector<int> s_min(n);

        p_max[0] = nums[0];
        for(int i=1;i<n;++i){
            p_max[i] = max(p_max[i-1], nums[i]);
        }
        s_min[n-1] = nums[n-1];
        for(int i=n-2;i>=0;--i){
            s_min[i] = min(s_min[i+1], nums[i]);
        }
        for(int i=0;i<n;i++){
            if(p_max[i] - s_min[i] <= k){
                return i;
            }
        }
        return -1;
    }
};