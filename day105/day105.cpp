// implementing a recursive bubble sort algorithm 
#include<bits/stdc++.h>
using namespace std;
void bubble_sort(vector<int> &arr, int n);

int main(){
    vector<int> arr={13, 46, 24, 52, 20, 9};
    int n=arr.size();

    cout << "Before Using Bubble Sort: " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    bubble_sort(arr, n);
    cout << "After Using bubble sort: " << "\n";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << "\n";
    return 0;
}

void bubble_sort(vector<int> &arr,int n){

    if(n==1)
    return;
    
    bool didswap=false;// the didswap variable is added to improve t.c in best case

    for(int j=0;j<n-1;j++){
        if(arr[j]>arr[j+1]){
            swap(arr[j],arr[j+1]);
            didswap=true;
        }
    }

    if(didswap==false)
        return;
    

    bubble_sort(arr,n-1);
}
