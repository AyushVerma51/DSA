class Solution {
public:
    bool checkDivisibility(int n) {
        int temp=n;
        int dSum=0;
        int dProd=1;

        while(temp>0){
            int digit= temp%10;
            dSum += digit;
            dProd *= digit;
            temp /= 10;
        }
        int divisor= dSum + dProd;
        if(divisor==0) return false;
        
        return (n % divisor == 0);
    }
};