#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    
    int n;
    cout<<"enter the size of the array"<<endl;
    cin>>n;

    vector<int>arr(n);

    for(int i=0;i<arr.size();i++){
        cout<<"enter the"<<i<<"th element"<<endl;
        cin>>arr[i];
    }

    int largest=INT_MIN;
    int second_largest=INT_MIN;

    for(int i=0;i<arr.size();i++){
        if(arr[i]>largest){
            second_largest=largest;
            largest=arr[i];
        }
        else if(arr[i]>second_largest){
            second_largest=arr[i];
        }
    }

    cout<<"second largest is "<<second_largest<<endl;
    return 0;
}