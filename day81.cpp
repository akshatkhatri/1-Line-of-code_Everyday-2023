/* Problem statement

You have been given an array ‘a’ of ‘n’ non-negative integers.You have to check whether the given array is sorted in the non-decreasing order or not.


Your task is to return 1 if the given array is sorted. Else, return 0.


Example :

Input: ‘n’ = 5, ‘a’ = [1, 2, 3, 4, 5]
Output: 1

The given array is sorted in non-decreasing order; hence the answer will be 1.

*/

//BRUTE-FORCE APPROACH

int isSorted(int n, vector<int> a) {
    // Write your code here.
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            if(a[i]>a[j]){
                return false;
            }
        }
    }
    return true;
}

// OPTIMAL APPROACH

int isSorted(int n, vector<int> a) {
    // Iterate through the array and compare adjacent elements
    for (int i = 0; i < n - 1; i++) {
        // If the current element is greater than the next, not sorted
        if (a[i] > a[i + 1]) return false;
    }
    // Array is sorted if the loop completes without returning false
    return true;
}
