class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
   
        int n = nums.size();
        //first occurence
    int s = 0;
    int e  = n-1;
    int ans1 =-1;
    int mid1 = s+(e-s)/2;
    while(s<=e){
        if(target ==nums[mid1]){
           ans1 =mid1;
          e = mid1 -1;
        }
        else if(target>nums[mid1]){
            s =mid1+1;
        }
        else {
            e = mid1-1;
        }
        mid1 = s+(e-s)/2;
    }
    cout<<ans1;
 // last occurence 
    int start = 0;
    int end  = n-1;
    int ans =-1;
    int mid = start+(end-start)/2;
    while(start<=end){
        if(target ==nums[mid]){
           ans =mid;
          start = mid+1;
        }
        else if(target>nums[mid]){
            start =mid+1;
        }
        else {
            end = mid-1;
        }
        mid = start+(end-start)/2;
    }
    cout<<ans;
return {ans1,ans};
    }
};
