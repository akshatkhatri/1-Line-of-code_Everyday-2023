//author-akshat khatri
//date-10/12/2023
//diffrent methods of traversing vectors in cpp
#include<iostream>
#include<vector>
using namespace std;

int main(){
    
    //methods of declaring vectors
    vector<int>vec_1;
    // creates a vector of size 10
    vector<int>vec_2(10);
    // creates a vector of size10 and initializes it with 5
    vector<int>vec_3(10,5);

    vec_3.push_back(10);
    vec_3.push_back(20);

    for(auto x:vec_3){
        cout<<x<<" ";
    }
    cout<<endl;

    // traversing using iterator
    // vector<int>::iterator itr;

    for(auto itr=vec_3.begin();itr<vec_3.end();itr++){
        cout<<*itr<<" ";
    }
    cout<<endl;

    //it doesnot do outof bounds checking
    cout<<vec_3[12]<<endl;

    //this does out of bounds checking and throws an exception
    // cout<<vec_3.at(12);
    return 0;
}
