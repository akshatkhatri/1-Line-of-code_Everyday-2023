// merge sort algorithm recursive
#include<bits/stdc++.h>

using namespace std;

// the below function merges two sorted arrays into one array

void merge(vector<int> &arr, int low, int mid, int high){

    vector<int> temp;
    int left=low;
    int right=mid+1;

    while(left<=mid && right<=high){

        if(arr[left]<=arr[right]){

            temp.push_back(arr[left]);
            left++;

        }

        else{
            temp.push_back(arr[right]);
            right++;
        }
    }


    while(left<=mid){
        temp.push_back(arr[left]);
        left++;
    }

    while(right<=high){
        temp.push_back(arr[right]);
        right++;
    }

    //copying the elements into original array

    for(int i=low;i<=high;i++){
        arr[i]=temp[i-low];
    }
}

    void merge_sort(vector<int> &arr,int low,int high){
        if(low>=high)
        return;

        int mid=(low+high)/2;

        merge_sort(arr,low,mid);
        merge_sort(arr,mid+1,high);

        merge(arr,low,mid,high);
    }

    int main(){

    vector<int>input;
        int n=0;
        cout<<"enter the size of the array"<<endl;
        cin>>n;

        for(int i=0;i<n;i++){
            int num;
            cout<<"enter the"<<i+1<<"th element"<<endl;
            cin>>num;
            input.push_back(num);
        }

        merge_sort(input,0,n-1);

        cout<<"array after sorting"<<endl;

        for(int i=0;i<n;i++){
            cout<<input[i]<<" ";
        }

        cout<<endl;

    }

