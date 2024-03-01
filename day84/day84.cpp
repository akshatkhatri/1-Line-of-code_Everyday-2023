/*
 Problem statement

Given an array 'arr' containing 'n' elements, rotate this array left once and return it.


Rotating the array left by one means shifting all elements by one place to the left and moving the first element to the last position in the array.


Example:

Input: 'a' = 5, 'arr' = [1, 2, 3, 4, 5]

Output: [2, 3, 4, 5, 1]

Explanation: We moved the 2nd element to the 1st position, and 3rd element to the 2nd position, and 4th element to the 3rd position, and the 5th element to the 4th position, and move the 1st element to the 5th position.

*/

//BRUTE-FORCE:

#include <bits/stdc++.h> 
vector<int> rotateArray(vector<int>& arr, int n) {
    // Write your code here.
    vector<int>dummy_array(n);
    int element=arr[0];

    for(int i=0;i<n-1;i++){
        dummy_array[i]=arr[i+1];
    }

    dummy_array[n-1]=element;

    return dummy_array;

}

//Optimized-approach

#include <bits/stdc++.h> 
vector<int> rotateArray(vector<int>& arr, int n) {
    // Write your code here.
    int i=0;

    while(i<n-1){
        swap(arr[i],arr[i+1]);
        i++;
    }

    return arr;
}
