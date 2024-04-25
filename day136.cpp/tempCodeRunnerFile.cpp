#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>arr={1,2,3,4,5};
    int k;
    cout<<"how much do you want to rotate the array"<<endl;
    cin>>k;

    reverse(arr.begin(),arr.begin()+(arr.size()-k));
    reverse(arr.begin()+k,arr.end());
    reverse(arr.begin(),arr.end());

    for (int i = 0; i < arr.size(); i++)
    {
        cout<<arr[i]<<" ";
    }
    
    

    return 0;
}