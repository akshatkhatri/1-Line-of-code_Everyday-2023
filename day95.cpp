/*
 Problem statement

You are given a sorted array 'arr' of positive integers of size 'n'.


It contains each number exactly twice except for one number, which occurs exactly once.


Find the number that occurs exactly once.


Example :

Input: ‘arr’ = {1, 1, 2, 3, 3, 4, 4}.

Output: 2

Explanation: 1, 3, and 4 occur exactly twice. 2 occurs exactly once. Hence the answer is 2.

*/

//Approach -1 
//t.c.-O(N^2)
//S.C.-O(1)
#include<vector>

int getSingleElement(vector<int> &arr){
	// Write your code here.
	int n=arr.size();

	for (int i = 0; i < n; i++) {
        int num = arr[i]; 
        int cnt = 0;

        
        for (int j = 0; j < n; j++) {
            if (arr[j] == num)
                cnt++;
        }

        
        if (cnt == 1) return num;
    }
}

//Approach-2
//T.c.-O(Nlogn)
//S.c.-O(1)
#include<vector>

int getSingleElement(vector<int> &arr){
	// Write your code here.	
  int n=arr.size();
	sort(arr.begin(),arr.end());

	for(int i=0;i<arr.size()||n;i=i+2){
		if(arr[i]!=arr[i+1]){
			return arr[i];
		}
	}

	return -1;
}
