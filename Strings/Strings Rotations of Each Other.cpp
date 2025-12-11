/*
You are given two strings s1 and s2, of equal lengths. The task is to check if s2 is a rotated version of the string s1.

Note: A string is a rotation of another if it can be formed by moving characters from the start to the end (or vice versa) without rearranging them.

Examples :

Input: s1 = "abcd", s2 = "cdab"
Output: true
Explanation: After 2 right rotations, s1 will become equal to s2.
*/

//METHOD 1
class Solution {
  public:
    bool areRotations(string &s1, string &s2) {
        // case1: when the lengths donot match, they can never be same
        if(s1.length()!=s2.length()){
            return false;
        }
        
        
        //other cases
        string temp=s1+s1;
        
        if(temp.find(s2)!=string::npos){
            return true;
        }
        return false;
    }
};


//METHOD 2

bool areRotations(string s1, string s2) {
    if(s1.length() != s2.length()) return false;

    int n = s1.length();
    for(int i = 0; i < n; i++) {
        // Left rotate by 1
        s1 = s1.substr(1) + s1[0];

        if(s1 == s2)
            return true;
    }
    return false;
}

