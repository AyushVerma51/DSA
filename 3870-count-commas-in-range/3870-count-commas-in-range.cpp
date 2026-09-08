class Solution {
public:
    int countCommas(int n) {
        long totalCom=0;
        long start= 1000;
        while(n>=start){
            totalCom += (n-start+1);start *= 1000;
        }
        return totalCom;
    }
};