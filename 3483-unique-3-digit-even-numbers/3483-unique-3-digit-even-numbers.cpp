class Solution {
public:
    int totalNumbers(vector<int>& digits) {
        vector<int> freq(10, 0);
        for(int d: digits){
            freq[d]++;
        }
        int uniqueCnt= 0;
        for(int n=100;n<=998;n+=2){
            int d1= n/100;
            int d2= (n/10)%10;
            int d3= n%10;
            freq[d1]--;
            freq[d2]--;
            freq[d3]--;

            if(freq[d1]>=0 && freq[d2]>=0 && freq[d3]>=0){
                uniqueCnt++;
            }
            freq[d1]++;
            freq[d2]++;
            freq[d3]++;
        }
        return uniqueCnt;
    }
};