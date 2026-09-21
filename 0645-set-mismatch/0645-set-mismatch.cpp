class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        int dupli= -1;
        int miss= -1;
        for(int i=0;i<nums.size();i++){
            int val= abs(nums[i]);
            if(nums[val-1]<0){
                dupli= val;
            }else{
                nums[val-1] = -nums[val-1];
            }
        }
        for(int i=0;i<nums.size();i++){
            if(nums[i]>0){
                miss= i+1;
                break;
            }
        }
        return {dupli, miss};
    }
};