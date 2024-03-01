/* 
 Problem statement

Given two sorted arrays, ‘a’ and ‘b’, of size ‘n’ and ‘m’, respectively, return the union of the arrays.


The union of two sorted arrays can be defined as an array consisting of the common and the distinct elements of the two arrays. The final array should be sorted in ascending order.


Note: 'a' and 'b' may contain duplicate elements, but the union array must contain unique elements.


Example:

Input: ‘n’ = 5 ‘m’ = 3
‘a’ = [1, 2, 3, 4, 6]
‘b’ = [2, 3, 5]

Output: [1, 2, 3, 4, 5, 6]

Explanation: Common elements in ‘a’ and ‘b’ are: [2, 3]
Distinct elements in ‘a’ are: [1, 4, 6]
Distinct elements in ‘b’ are: [5]
Union of ‘a’ and ‘b’ is: [1, 2, 3, 4, 5, 6]
*/

// approach 1 using map in key-value pair

#include<map>
vector < int > sortedArray(vector < int > a, vector < int > b) {
    // Write your code here
    map<int,int>freq;
    vector<int>res;

    for(int i=0;i<a.size();i++){
        freq[a[i]]++;
    }

    for(int i=0;i<b.size();i++){
        freq[b[i]]++;
    }

    for(auto it : freq){
        res.push_back(it.first);
    }
    return res;

}

//Approach 2 using a Two-Pointer Approach

vector < int > sortedArray(vector < int > arr1, vector < int > arr2) {
    // Write your code here
    int i=0;
    int j=0;
    int n=arr1.size();
    int m=arr2.size();
    vector<int>res_union;
    while(i<n && j<m){

        if(arr1[i]<=arr2[j]){

            if(res_union.empty()||res_union.back()!=arr1[i]){

                res_union.push_back(arr1[i]);
            }
            i++;
        }

        else{
            if(res_union.empty() || res_union.back()!=arr2[j]){
                res_union.push_back(arr2[j]);
            }
            j++;
        }
    }

    while(i<n){
        if(res_union.back()!=arr1[i]){
            res_union.push_back(arr1[i]);
        }
        i++;
    }

    while(j<m){
        if(res_union.back()!=arr2[j]){
            res_union.push_back(arr2[j]);
        }
        j++;
    }

    return res_union;
}
