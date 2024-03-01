/*
 Problem statement

You are given an array 'a' of size 'n' and an integer 'k'.


Find the length of the longest subarray of 'a' whose sum is equal to 'k'.


Example :

Input: ‘n’ = 7 ‘k’ = 3
‘a’ = [1, 2, 3, 1, 1, 1, 1]

Output: 3

Explanation: Subarrays whose sum = ‘3’ are:

[1, 2], [3], [1, 1, 1] and [1, 1, 1]

Here, the length of the longest subarray is 3, which is our final answer.

*/

//Approach #1 (Brute-Brute-Force)

  int n = a.size(); 

    int len = 0;
    for (int i = 0; i < n; i++) { 
        long long s = 0; 
        for (int j = i; j < n; j++) { 
            
            s += a[j];

            if (s == k)
                len = max(len, j - i + 1);
        }
    }
    return len;


//Approach #2
int longestSubarrayWithSumK(vector<int> a, long long k) {
    // Write your code here
    int n = a.size(); 

    int len = 0;
    for (int i = 0; i < n; i++) {
        for (int j = i; j < n; j++) { 
         
            long long s = 0;
            for (int K = i; K <= j; K++) {
                s += a[K];
            }

            if (s == k)
                len = max(len, j - i + 1);
        }
    }
    return len;
}
