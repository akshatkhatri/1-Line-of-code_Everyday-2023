/*
 Problem statement

You are given a sorted integer array 'arr' of size 'n'.


You need to remove the duplicates from the array such that each element appears only once.


Return the length of this new array.


Note:

Do not allocate extra space for another array. You need to do this by modifying the given input array in place with O(1) extra memory. 


For example:

'n' = 5, 'arr' = [1 2 2 2 3].
The new array will be [1 2 3].
So our answer is 3.

*/

//BRUTE-FORCE
int removeDuplicates(vector<int> &arr, int n) {
	// Write your code here.
	 int i = 0;

    while (i < n) {
        int j = i + 1;

        while (j < n) {
            if (arr[i] == arr[j]) {
                // Remove the duplicate element by shifting elements to the left
                for (int k = j; k < n - 1; ++k) {
                    arr[k] = arr[k + 1];
                }
                n -= 1;
            } else {
                j += 1;
            }
        }

        i += 1;
    }

    return n;
}

//Better solution
int removeDuplicates(vector<int> &arr, int n) {
	// Write your code here.
	int index = 0;

    for (int i = 0; i < n - 1; ++i) {
        if (arr[i] != arr[i + 1]) {
            arr[index++] = arr[i];
        }
    }

    arr[index++] = arr[n - 1];

    return index;
}
