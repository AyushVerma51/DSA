class Solution {
public:
    vector<int> targetIndices(vector<int>& nums, int target) {
        int less_than =0;
        int equal =0;
        for(int num:nums){
            if(num<target){
                less_than++;
            }else if(num==target){
                equal++;
            }
        }
        vector<int> res;
        for(int i=0;i<equal;i++){
            res.push_back(less_than + i);
        }
        return res;
    }
};