
// hashing part 1 by striver


#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main(){

    int n;
    cin>>n;

    int arr[n];

    for(int i=0;i<n;i++){
        cout<<"enter the"<<i<<" number";
        cin>>arr[i];
    }


    int hash[13]={0};

    for(int i=0;i<n;i++){

        hash[arr[i]]+=1;
    }
    int q;
    cout<<"enter how many number you want to search"<<endl;
    cin>>q;

    while(q--){
        int number;
        cin>>number;

        cout<<hash[number]<<endl;
    }

    return 0;

}
