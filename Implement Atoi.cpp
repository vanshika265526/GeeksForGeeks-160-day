/*
Given a string s, the objective is to convert it into integer format without utilizing any built-in functions. Refer the below steps to know about atoi() function.

Cases for atoi() conversion:

Skip any leading whitespaces.
Check for a sign (‘+’ or ‘-‘), default to positive if no sign is present.
Read the integer by ignoring leading zeros until a non-digit character is encountered or end of the string is reached. If no digits are present, return 0.
If the integer is greater than 231 – 1, then return 231 – 1 and if the integer is smaller than -231, then return -231.


Input: s = "-123"
Output: -123
Explanation: It is possible to convert -123 into an integer so we returned in the form of an integer


  */

//basically return the number part from a given string, if number very less return int min and if number very large return int max

class Solution {
  public:
    int myAtoi(string& s) {
        // code here
        int i=0;  //because we are using while loops
        
        int n=s.size();  //taking our array size
        
        
        //handle the whitespaces first
        while(i<n && s[i]==' ' ){
            i++;   //if a whitespace is coming, just keep moving the pointer to next position
        }
        
        //if your string has only spaces
        if(i==n) return 0;
        
        
        //handle the sign 
        int sign=1;
        if(s[i]=='-'){
            sign=-1;
            i++;
        }
        else if(s[i]=='+'){
            i++;
        }
        
        //to detect overflow of number
        long long num=0;
        bool digitFound=false;
        
        while(i<n && isdigit(s[i])){
            digitFound=true;
            int digit=s[i]-'0';
            num=num*10+digit;
            
            if(sign==1 && num>INT_MAX){
                return INT_MAX;
            }
            if(sign==-1 && -num<INT_MIN){
                return INT_MIN;
            }
            
            i++;
            
        }
        if(!digitFound) return 0;
        
        return (int)(num*sign);
    }
};

