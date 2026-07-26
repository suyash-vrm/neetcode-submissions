class Solution {
public:
    int maxArea(vector<int>& heights) {
        int n = heights.size();
        int low = 0 ;
        int high = n-1;
        int maxArea = 0;

        while(low<=high){
            int currArea = (high- low) * min(heights[low],heights[high]);
            maxArea = max(maxArea , currArea);
            if(heights[low] <= heights[high]){
                low++;
            }else{
                high--;
            }
        }
        return maxArea;
    }
};
