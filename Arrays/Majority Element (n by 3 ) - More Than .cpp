/*
Given an array arr[] consisting of n integers, the task is to find all the array elements which occurs more than floor(n/3) times.

Note: The returned array of majority elements should be sorted.
  */

class Solution {
  public:
    vector<int> findMajority(vector<int>& arr) {
        
        //first lets get the size of array to calculate floorvalue
        int n=arr.size();
        int floorvalue=n/3;
        
        //now this is a basic understanding that for a case like n/3 there cannot be more tha 2 candidates for majority elements, because if 3 then 3/3=1 which is not right
        //so first lets make variables to store those candidates and their counts
        int c1=-1, c2=-1;
        int count1=0, count2=0;
        
        //now looping through our array
        for (int i:arr){
            //first condition: if our c1 matches i
            if(i==c1) count1++;
            //second :if our c2 matches i
            else if(i==c2) count2++;
            //third:if c1 doesnot match i ie count1=0
            else if(count1==0){
                count1=1;
                c1=i;
            }
            //fourth: if ni not matches c2
            else if(count2==0){
                c2=i;
                count2=1;
            }
            else{
                count1--;
                count2--;
            }
        }
        
        //we also do a final verification step to check if actually count1 and count 2 are greater than 1
        count1=count2=0;
        for(int i:arr){
            if(i==c1)count1++;
            else if(i==c2)count2++;
        }
        
        //now we store the final thing in an array- sorted array
        vector<int> result;
        if(count1>floorvalue) result.push_back(c1);
        if(count2>floorvalue) result.push_back(c2);
        sort(result.begin(),result.end());
        
        return result;
        
    }
};
