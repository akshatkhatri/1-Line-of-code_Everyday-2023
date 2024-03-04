#include<bits/stdc++.h>
#include<iostream>

using namespace std;
int main(){
    int n;
    cout<<"enter the number of elements in array"<<endl;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    // map<int,int> mpp; //in map keys are stored in a sorted order
    unordered_map<int,int> mpp;//in unordered the keys are random 

    for(int i=0;i<n;i++)
    {
        mpp[arr[i]]++;
    }

    for(auto it : mpp){
        cout<<it.first<<"->"<<it.second<<endl;
    }
    //entering query
    int q;
    cout<<"enter the number of elemets"<<endl;
    cin>>q;
    int number;
    while(q--)
    {
        cout<<"enter the number that you want to find"<<endl;
        cin>>number;
        cout<<mpp[arr[number]]<<endl;
    }
    return 0;
}
