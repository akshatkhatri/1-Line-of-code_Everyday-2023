// character hashing using arrays 
#include<bits/stdc++.h>
using namespace std;
int main(){
    
    string s;
    char hash[26]={0};

    cout<<"enter the string"<<endl;
    cin>>s;

    for(int i=0;i<s.size();i++){

        hash[s[i]-'a']++;
    }
    int q;
    cout<<"enter the number of queries"<<endl;
    cin>>q;
    // cout<<endl;

    while(q--){
        char character;
        cout<<"enter the character"<<endl;
        cin>>character;

        cout<<hash[character-'a']<<endl;
    }

    return 0;

}

