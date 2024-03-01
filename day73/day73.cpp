//example#4
#include <iostream>

using namespace std;

void print(int i, int n) {
    if (i > n) {
        return;
    }
    print(i + 1, n);
    cout << i << endl;
}

int main() {
    int n = 10;  // Change the value of n as needed
    print(1, n);
    return 0;
}


//example#3
#include<bits/stdc++.h>

using namespace std;
void print(int i,int n){
    if(i<1){
        return;
    }
    print(i-1,n);
    cout<<(i)<<endl;
}

int main(){
    // int lower=1;
    int upper=10;
    print(upper,upper);
    return 0;
}

// #example #1
// #include<bits/stdc++.h>

// using namespace std;

// void print(int n){
//     if(n==0){
//         return;
//     }
//     cout<<"Akshat"<<endl;
//     print(n-1);
// }
// int main(){
//     int n;
//     cout<<"enter number"<<endl;
//     cin>>n;

//     print(n);
//     return 0;
// }

//example #2

// #include<bits/stdc++.h>

// using namespace std;

// void print(int lower,int upper){

//     if(lower>upper){
//         return;
//     }    

//     cout<<lower<<" ";
//     print(lower+1,upper);
// }
// int main(){
//     int lower=1;
//     int upper;

//     cout<<"enter a number"<<endl;
//     cin>>upper;
//     print(lower,upper);    
//     return 0;
// }

