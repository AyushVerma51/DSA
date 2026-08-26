class Solution {
public:
    int maxArea(vector<int>& height) {
        int m_water=0;
        int l=0;
        int r= height.size()-1;
        while(l<r){
            int w = r-l;
            int currH= min(height[l], height[r]);
            int currW = w * currH;
            m_water= max(m_water, currW);

            if(height[l] < height[r]) l++;
            else r--;
        }
        return m_water;
    }
};