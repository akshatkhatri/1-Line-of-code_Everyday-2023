#include <iostream>
#include <algorithm>
using namespace std;

bool areAnagrams(string s1, string s2) {
  if (s1.length() != s2.length())
    return false;

  sort(s1.begin(), s1.end());
  sort(s2.begin(), s2.end());

  for (int i = 0; i < s1.length(); i++) {
    if (s1[i] != s2[i])
      return false;
  }
  return true;
}

int main() {
  string strA = "INTEGER";
  string strB = "TEGERNI";

  if (areAnagrams(strA, strB))
    cout << "True" << endl;
  else
    cout << "False" << endl;

  return 0;
}
