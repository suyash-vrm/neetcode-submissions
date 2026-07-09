class Solution {
public:

    int totalHours(vector<int>& nums,int k){
        int hours = 0;
        for(auto it:nums){
            hours += ceil(double(it)/k);
        }
        return hours;
    }

    int minEatingSpeed(vector<int>& piles, int h) {
        int low = 1;
        int high = *max_element(piles.begin(),piles.end());
        int ans =*max_element(piles.begin(),piles.end());

        while(low<=high){
            int mid = (low+high)/2;
            if(totalHours(piles,mid)<=h){
                ans = mid;
                high = mid-1;
            }else{
                low=mid+1;
            }
        }
        return ans;
    }
};
