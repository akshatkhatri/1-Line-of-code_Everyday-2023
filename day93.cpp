/*
 Problem statement

Given an array ‘a’ of size ‘n’-1 with elements of range 1 to ‘n’. The array does not contain any duplicates. Your task is to find the missing number.


For example:

Input:
'a' = [1, 2, 4, 5], 'n' = 5

Output :
3

Explanation: 3 is the missing value in the range 1 to 5.

*/

// Brute-force approach
int missingNumber(vector<int>&a, int N) {
    // Write your code here.
    for (int i = 1; i <= N; i++) {

        // flag variable to check
        //if an element exists
        int flag = 0;

        //Search the element using linear search:
        for (int j = 0; j < N - 1; j++) {
          if (a[j] == i) {

            // i is present in the array:
            flag = 1;
            break;
          }
        }

        // check if the element is missing
        // i.e flag == 0:

        if (flag == 0)
          return i;
    }
}


// Optimal Approach
int missingNumber(vector<int>&a, int N) {
    // Write your code here.
    //Summation of first N numbers:
    int sum = (N * (N + 1)) / 2;

    //Summation of all array elements:
    int s2 = 0;
    for (int i = 0; i < N - 1; i++) {
        s2 += a[i];
    }

    int missingNum = sum - s2;
    return missingNum;
}
