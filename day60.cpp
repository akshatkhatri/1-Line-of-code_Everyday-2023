#include<bits/stdc++.h>

using namespace std;

int main(){
    pair<int,int> p={2,3};
    cout<<p.first<<" "<<p.second<<endl;

    pair<int,pair<int,int>>p1={2,{3,4}};
    cout<<p1.first<<" "<<p1.second.first<<" "<<p1.second.second;

    pair<int,int>arr[10]={{2,3},{4,6},{5,9}};

    cout<<arr[1].second;
}
