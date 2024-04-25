#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>arr={1,2,3,4,5};
    int k;
    cout<<"how much do you want to rotate the array"<<endl;
    cin>>k;

    reverse(arr.begin(),arr.begin()+(arr.size()-k));
     for (int i = 0; i < arr.size(); i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    reverse(arr.begin()+(arr.size()-k),arr.end());
     for (int i = 0; i < arr.size(); i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    reverse(arr.begin(),arr.end());
     for (int i = 0; i < arr.size(); i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    for (int i = 0; i < arr.size(); i++)
    {
        cout<<arr[i]<<" ";
    }
    
    

    return 0;
}

// #include <iostream>
// #include <vector>
// #include <algorithm> // Include this header explicitly for reverse
// using namespace std;

// int main() {
//     vector<int> arr = {1, 2, 3, 4, 5};
//     int k;
//     cout << "How much do you want to rotate the array?" << endl;
//     cin >> k;

//     // Rotate the array
//     reverse(arr.begin(), arr.begin() + k);
//     reverse(arr.begin() + k, arr.end());
//     reverse(arr.begin(), arr.end());

//     // Print the rotated array
//     for (int i = 0; i < arr.size(); i++) {
//         cout << arr[i] << " ";
//     }
//     cout << endl;

//     return 0;
// }
