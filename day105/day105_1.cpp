#include<bits/stdc++.h>

using namespace std;

void insertion_sort(vector<int> &arr,int i,int n){

    if(i==n)
    return;

    int j=i;

    while(j>0 && arr[j]<arr[j-1]){
        swap(arr[j],arr[j-1]);
        j--;
    }

    insertion_sort(arr,i+1,n);
}

int main(){
    vector<int> arr={13, 46, 24, 52, 20, 9};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "Before Using insertion Sort: " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    insertion_sort(arr, 0, n);
    cout << "After Using insertion sort: " << "\n";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << "\n";
    return 0; 
}