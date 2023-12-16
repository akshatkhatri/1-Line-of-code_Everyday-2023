/*Introduction:
Anagrams are words or phrases formed by rearranging the letters of another. Detecting whether two strings are anagrams is a common programming problem. In this article, we will discuss a C++ solution that utilizes unordered maps to efficiently determine whether two input strings are anagrams.

The Problem:
Given two strings, the task is to determine if they are anagrams of each other. An anagram is formed by rearranging the characters of one string to produce the other string. For example, "listen" and "silent" are anagrams.
*/
class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char,int>anagram_map;

        for(int i=0;i<s.length();i++){
            anagram_map[s[i]]++;
        }
        for(int j=0;j<t.length();j++){
            anagram_map[t[j]]--;
        }
        // unordered_map<char,int>::iterator itr;

        for(auto itr=anagram_map.begin();itr!=anagram_map.end();++itr){
            if(itr->second!=0){
                return false;
            }
        }
        return true;
    }
};

#include<algorithm>
class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length()!=t.length()){
            return false;
        }
      sort(s.begin(),s.end());
      sort(t.begin(),t.end());

      for(int i=0;i<s.length();i++){
      if(s[i]!=t[i]){
        return false;
        }
        }
        return true;
    }
};
/*
The Approach:
The C++ solution presented here employs the use of unordered maps, a powerful data structure in the C++ Standard Template Library (STL). The basic idea is to count the occurrences of each character in both strings and then compare the counts. If the counts match for all characters, the strings are considered anagrams.

Explanation:

    Initialization:
    The solution begins by declaring an unordered map named anagram_map with characters as keys and their corresponding counts as values.

    Counting Characters in the First String:
    A loop iterates through each character in the first string (s). For each character, its count in the anagram_map is incremented.

    Counting Characters in the Second String:
    Another loop iterates through each character in the second string (t). For each character, its count in the anagram_map is decremented.

    Comparison of Counts:
    After the counts have been updated for both strings, the solution iterates through the anagram_map using an iterator. If there exists any character with a non-zero count, the strings cannot be anagrams, and the function returns false.

    Final Result:
    If the iteration completes without finding any non-zero counts, the function returns true, indicating that the input strings are anagrams.

Conclusion:
This C++ solution efficiently determines whether two strings are anagrams by utilizing unordered maps to keep track of character counts. 
The use of unordered maps allows for a time complexity of O(n), where n is the length of the input strings. This approach demonstrates the power and simplicity of the C++ Standard Template Library in solving common programming challenges.*/
