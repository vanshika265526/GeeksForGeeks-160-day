/*
Given two strings, one is a text string txt and the other is a pattern string pat. The task is to print the indexes of all the occurrences of the pattern string in the text string. Use 0-based indexing while returning the indices.
Note: Return an empty list in case of no occurrences of pattern.

Examples :

Input: txt = "abcab", pat = "ab"
Output: [0, 3]
Explanation: The string "ab" occurs twice in txt, one starts at index 0 and the other at index 3. 
  */

class Solution {
  public:
    vector<int> search(string &pat, string &txt) {
       int m=pat.size();
       int n=txt.size();
       vector<int> ans;
       
       if(m==0 || n<m) return ans;
       
       vector<int> lps(m,0);
       int len=0,i=1;
       
       while(i<m){
           if(pat[i]==pat[len]){
               len++;
               lps[i]=len;
               i++;
           } else{
               if(len!=0){
                   len=lps[len-1];
               } else{
               lps[i]=0;
               i++;
                }
            }
        }
        int t=0,p=0;
        while(t<n){
            if(txt[t]==pat[p]){
                t++;
                p++;
            }
            if(p==m){
                ans.push_back(t-p);
                p=lps[p-1];
                
            }
            else if(t<n && txt[t]!=pat[p]){
                if(p!=0){
                    p=lps[p-1];
                }
                else{
                    t++;
                }
            }
        }
        return ans;
        }
};
