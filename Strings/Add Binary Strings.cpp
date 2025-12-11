/*
Given two binary strings s1 and s2 consisting of only 0s and 1s. Find the resultant string after adding the two Binary Strings.
Note: The input strings may contain leading zeros but the output string should not have any leading zeros.

Input: s1 = "1101", s2 = "111"
Output: 10100
Explanation:
 1101
+ 111
10100
  */

// User function template for C++
class Solution {
  public:
    string addBinary(string& s1, string& s2) {
        
        int i=s1.size()-1;
        int j=s2.size()-1;
        int carry=0;
        string res="";
        
        while(i>=0 || j>=0 || carry){
            int sum=carry;
            if(i>=0) sum+=s1[i--]-'0';
            if(j>=0) sum+=s2[j--]-'0';
            
            res.push_back((sum%2)+'0');
            carry=sum/2;
        }
        
        reverse(res.begin(),res.end());
        int k=0;
        while(k<res.size() && res[k]=='0'){
            k++;
        }
            res=res.substr(k);
            return res==""?"0":res;
        
    }
};


