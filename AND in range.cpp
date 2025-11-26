/*
You are given two integers l and r. Find the result after applying the series of Bitwise AND ( & ) operation on every natural number between the range l to r (including both).

Examples:

Input: l = 8, r = 13
Output: 8
Explanation: 
8 AND 9 AND 10 AND 11 AND 12 AND 13 = 8.
  */

class Solution {
public:
    int andInRange(int l, int r) {

        //these are total number of shifts so that last bit is same and then we can left shift it.
        int shifts = 0;

      //keep right shifting both l and r until they become equal that is both 1
        while (l != r) {
            l >>= 1;
            r >>= 1;
            //keep on counting number of iterations through shifts
            shifts++;
        }

      //after finding shifts, left shift it,  it wil return us the result of AND between l and r
        return l << shifts;
    }
};
