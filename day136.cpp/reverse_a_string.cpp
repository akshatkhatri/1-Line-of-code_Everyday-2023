#include <iostream>
#include <string>
using namespace std;

int main() {
    string str = "abbba";

    int left=0;
    int right=str.length()-1;

    while(left<=right){
        if(str[left]!=str[right]){
            cout<<"not a palindrome"<<endl;
            exit(0);
        }

        left++;
        right--;
    }

    cout<<"yes it is a palindrome"<<endl;

}
