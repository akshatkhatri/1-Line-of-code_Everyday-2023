/* Problem statement

You are given a sorted array 'arr' of positive integers of size 'n'.


It contains each number exactly twice except for one number, which occurs exactly once.


Find the number that occurs exactly once.


Example :

Input: ‘arr’ = {1, 1, 2, 3, 3, 4, 4}.

Output: 2

Explanation: 1, 3, and 4 occur exactly twice. 2 occurs exactly once. Hence the answer is 2.

*/

//XOR SOLUTION (^)
#include<vector>

int getSingleElement(vector<int> &arr){
	// Write your code here.
	int XOR=0;

	for(int i=0;i<arr.size();i++){
		XOR=XOR^arr[i];
	}

	return XOR;	
}

//Ano B.F
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
