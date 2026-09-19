class Solution {
public:
    int mostFrequentEven(vector<int>& nums) {
        unordered_map<int,int> counts;
        int ans= -1;
        int max_f=0;
        for(int num:nums){
            if(num%2==0){
                counts[num]++;
                if(counts[num]>max_f || (counts[num] == max_f && num<ans)){
                    ans= num;
                    max_f= counts[num];
                }
            }
        }
        return ans;
    }
};