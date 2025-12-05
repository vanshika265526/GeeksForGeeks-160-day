/*
Given a string s consisting of lowercase English Letters. return the first non-repeating character in s. If there is no non-repeating character, return '$'.

Examples:

Input: s = "geeksforgeeks"
Output: 'f'
Explanation: In the given string, 'f' is the first character in the string which does not repeat.
Input: s = "racecar"
Output: 'e'
Explanation: In the given string, 'e' is the only character in the string which does not repeat.
  */


class Solution {
  public:
    char nonRepeatingChar(string &s) {
        //make a frequency array with all elements 0
        int freq[26]={0};

      //go through the string and for every character increase count in its place
        for(char c:s){
            freq[c-'a']++;
        }


      //again traverse through string and freq array and if any element in freq array is 1= return the correspondent alphabet
        for(char c:s){
            if(freq[c-'a']==1){
                return c;
            }
        }
        return '$'; //if none  return 
    }
    
};

