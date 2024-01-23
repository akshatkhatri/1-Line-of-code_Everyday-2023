class Solution {
public:
    int fib(int n) {
        if(n==0){

        return 0;
        }

        if(n==1){

        return 1;
        }

        return fib(n-1)+fib(n-2);
    }
};
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

