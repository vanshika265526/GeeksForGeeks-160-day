/*
Given a string s, the task is to find the minimum characters to be added at the front to make the string palindrome.

Note: A palindrome string is a sequence of characters that reads the same forward and backward.

Examples:

Input: s = "abc"
Output: 2
Explanation: Add 'b' and 'c' at front of the above string to make it palindrome: "cbabc"
Input: s = "aacecaaaa"
Output: 2
Explanation: Add 2 a's at front of the above string to make it palindrome: "aaaacecaaaa"
  */


class Solution {
  public:
    int minChar(string &s) {
        string rev=string(s.rbegin(),s.rend());
        string temp=s+"$"+rev;
        int n=temp.size();
        vector<int> lps(n,0);
        for(int i=1;i<n;i++){
            int len=lps[i-1];
            
            while(len>0 && temp[i]!=temp[len]){
                len=lps[len-1];
                
            }
            if(temp[i]==temp[len]){
                len++;
            }
            lps[i]=len;
            
            
        }
        return s.size()-lps.back();
        
    }
};
