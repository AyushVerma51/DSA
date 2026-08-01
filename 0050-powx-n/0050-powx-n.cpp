class Solution {
public:
    double myPow(double x, int n) {
        long long nn= n;
        if(nn<0){
            x= 1.0/x;
            nn= -nn;
        }
        double ans= 1.0;
        double current_product= x;

        while(nn>0){
            if(nn%2==1){
                ans *= current_product;
            }
            current_product *= current_product;
            nn/=2;
        }
        return ans;
    }
};