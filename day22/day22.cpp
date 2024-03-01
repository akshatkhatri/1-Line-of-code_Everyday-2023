class Solution {
  public:
  void reverse_array(vector<int>&nums,int low,int high){
    while(low<high){
      swap(nums[low],nums[high]);
      low++;
      high--;
    }
  }

public:
    void rotate(vector<int>& nums, int k) {

      int n=nums.size();
      k=k%n;

        reverse_array(nums,0,n-1);//7,6,5,4,3,2,1,
        
        reverse_array(nums,0,k-1);//5,6,7,4,3,2,1
        
        reverse_array(nums,k,n-1);//5,6,7,1,2,3,4
        
      
    }
};
