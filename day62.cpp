class Solution {
public:
    // Method to calculate the minimum steps to make two strings anagrams
    int minSteps(string s, string t) {
        // Arrays to store the frequency of each character in the English alphabet
        vector<int> freqS(26, 0);
        vector<int> freqT(26, 0);

        // Populate frequency arrays based on characters in strings s and t
        for (int i = 0; i < s.length(); i++) {
            freqS[s[i] - 'a']++; // Increment the frequency of the current character in string s
            freqT[t[i] - 'a']++; // Increment the frequency of the current character in string t
        }

        // Variable to store the count of steps needed to make the strings anagrams
        int count = 0;

        // Compare the frequency of each character in t with that in s
        for (int i = 0; i < 26; i++) {
            if (freqT[i] < freqS[i]) {
                // If frequency in t is less than that in s, add the difference to the count
                count += freqS[i] - freqT[i];
            }
        }

        // Return the total count, representing the minimum steps needed
        return count;
    }
};

// Priority Queue-STL
#include<bits/stdc++.h>

using namespace std;

int main(){

    priority_queue<int>pq;

    //maximum Heap

    pq.push(5);
    pq.push(10);
    pq.push(8);
    pq.push(7);

    while(!pq.empty()){
        cout<<pq.top()<<" ";
        pq.pop();

    }
    cout<<endl;
    //minimum heap

    priority_queue<int,vector<int>,greater<int>>pq1;

    pq1.push(5);
    pq1.push(10);
    pq1.push(8);
    pq1.push(7);

    while(!pq1.empty()){
        cout<<pq1.top()<<" ";
        pq1.pop();

    }

    return 0;
}
//set-stl
#include<bits/stdc++.h>

using namespace std;

int main(){
    
    set<int>s1;
    
    s1.insert(10);
    s1.insert(5);
    s1.insert(9);
    s1.insert(11);
    s1.insert(11);

    auto itr=s1.find(9);
    auto it=s1.find(5);

    // s1.
    return 0;
}
