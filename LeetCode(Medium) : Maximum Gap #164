class Solution {
public:
    int maximumGap(vector<int>& nums) {
        int maxi =0 ;
        sort(nums.begin(),nums.end());
        for(int i = 0;i<nums.size()-1;i++){
        int count =  nums[i+1]-nums[i];
        maxi =max(maxi,count);
    }
    return maxi;
    }
};
