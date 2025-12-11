/*
Given two non-empty strings s1 and s2, consisting only of lowercase English letters, determine whether they are anagrams of each other or not.
Two strings are considered anagrams if they contain the same characters with exactly the same frequencies, regardless of their order.
*/


//METHOD 1-just sort both the strings and if they are equal=anagrams
sort(s1.begin(),s1.end());
        sort(s2.begin(),s2.end());
        if(s1==s2){
            return true;
        }
        else return false;


//METHOD 2 - FREQUENCY ARRAY- BEST
class Solution {
  public:
    bool areAnagrams(string& s1, string& s2) {
        // code here
        
        //if sizes not same=>they are not anagrams;
        if(s1.size()!=s2.size()) return false;
        
        //otherwise start the approach
        int freq[26]={0}; //make a array of 26 size with all elements 0
        for(char c:s1){
            freq[c-'a']++;   //freq[c-'a] is basically for converting alphabets in number based
        }
        for(char c:s2){
            freq[c-'a']--;
        }
        
        for(int x:freq){
            if(x!=0) return false;
        }
        return true;
        
        
    }
};
