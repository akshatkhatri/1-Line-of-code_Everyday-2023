/* STRIVER DSA INSERTION SORT PRACTISE 
  T.C.-o(n^2)
  S.C-o(1)
  */

#include<iostream>

using namespace std;

void insertion_sort(int arr[],int n){

    int j;
    for(int i=0;i<n;i++){
        j=i;

        while(j>0 && arr[j-1]>arr[j]){

            swap(arr[j],arr[j-1]);
            j--;
        }
    }

    cout<<"ARRAY AFTER SORT IS "<<endl;

    for(int i =0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}



int main(){
    int n;
    cout<<"enter the size of the array you want to input"<<endl;
    cin>>n;

    int arr[n];
    for(int i=0;i<n;i++){
        cout<<"enter the "<<i+1<<" value"<<endl;
        cin>>arr[i];
    }

    cout<<endl;
    cout<<"the array before sort is"<<endl;

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    insertion_sort(arr,n);

    return 0;
}
