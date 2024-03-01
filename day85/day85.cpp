/* Problem statement

Given an array 'arr' with 'n' elements, the task is to rotate the array to the left by 'k' steps, where 'k' is non-negative.


Example:

'arr '= [1,2,3,4,5]
'k' = 1  rotated array = [2,3,4,5,1]
'k' = 2  rotated array = [3,4,5,1,2]
'k' = 3  rotated array = [4,5,1,2,3] and so on.

*/

//Brute-force
//T.C-O(k*n)
//S.C. (O(1))
vector<int> rotateArray(vector<int>arr, int k) {
    // Write your code here.
   while(k){
       for(int i=0;i<arr.size()-1;i++){
           swap(arr[i],arr[i+1]);
       }
        k--;
   }

   return arr;
}

//optimized approach
vector<int> rotateArray(vector<int>arr, int k) {
    // Write your code here.
    int n=arr.size();
    vector<int>dummy_array(n);
    int filled=0;

    for(int i=k;i<n;i++){
        dummy_array[filled]=arr[i];
        filled++;
    }

    for(int i=0;i<k;i++){
        dummy_array[filled]=arr[i];
        filled++;
    }

    return dummy_array;
}

// T.C-O(N)
// S.C.-O(N)
