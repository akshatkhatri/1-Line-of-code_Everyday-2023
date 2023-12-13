class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int sum=0;
        int max_sum=INT_MIN;

        for(int i=0;i<nums.size();i++){
            sum=sum+nums[i];
            
            if(sum>max_sum){
                max_sum=sum;
            }
            
            if(sum<0){
                sum=0;
            }
        }

      
        return max_sum;
    }
};

/*
Understanding Kadane's Algorithm for Maximum Subarray Sum

    Initialization:
        The algorithm initializes two variables, sum and max_sum.
        sum is used to keep track of the current sum of the subarray being considered.
        max_sum is used to store the maximum subarray sum found so far and is initially set to the minimum possible integer value.

    Iterating Through the Array:
        The algorithm iterates through the elements of the input array.

    Updating Current Sum:
        At each step, the current element is added to the current sum (sum).

    Updating Maximum Sum:
        If the current sum becomes greater than the maximum sum found so far (max_sum), max_sum is updated with the current sum.
        This step ensures that max_sum always holds the maximum subarray sum.

    Handling Negative Sums:
        If the current sum becomes negative, it is reset to 0.
        This step is based on the observation that if the sum becomes negative, it is better to start a new subarray from the current element, as any subarray including the negative sum would only decrease the total sum.

    Returning Result:
        After iterating through all elements, the algorithm returns the maximum subarray sum (max_sum).

Time Complexity:

    The time complexity of Kadane's algorithm is O(n), where n is the size of the input array. It efficiently finds the maximum subarray sum in a linear time complexity.

Key Points:

    Kadane's algorithm is a dynamic programming approach that avoids unnecessary recomputation by tracking the current sum locally.
    It is particularly useful for cases where the array contains both positive and negative numbers.
    The algorithm is simple, easy to implement, and has widespread applications in solving problems related to subarrays and dynamic programming.

*/

