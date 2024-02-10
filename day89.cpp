/* Problem statement

Sam want to read exactly ‘TARGET’ number of pages.

He has an array ‘BOOK’ containing the number of pages for ‘N’ books.

Return YES/NO, if it is possible for him to read any 2 books and he can meet his ‘TARGET’ number of pages.
Example:

Input: ‘N’ = 5, ‘TARGET’ = 5
‘BOOK’ = [4, 1, 2, 3, 1] 

Output: YES
Explanation:
Sam can buy 4 pages book and 1 page book.

*/

/*
    Time Complexity : O( N )
    Space complexity: O( N )

    Where N is the size of array.
*/

#include <unordered_map>

string read(int n, vector<int> book, int target)
{
    // Create a hash-map.
    unordered_map<int,bool> mp ;
    // Traverse through the array.
    for(int itr = 0; itr < n; itr++)
    {
        // If book with remaining pages is present.
        if(mp.find(target-book[itr]) != mp.end())
        {
            return "YES" ;
        }
        // Mark current book as true.
        mp[book[itr]] = true ;
    }
    // If no book pair is possible.
    return "NO" ;
}
