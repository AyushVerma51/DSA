class Solution {
public:
    string largestNumber(vector<int>& nums) {
        vector<string> strNum;
        for(int num: nums){
            strNum.push_back(to_string(num));
        }
        sort(strNum.begin(), strNum.end(), [](const string& a, const string& b){
            return a+b > b+a;
        });
        if(strNum[0]=="0"){
            return "0";
        }
        string result ="";
        for(const string& str : strNum){
            result += str;
        }
        return result;
    }
};