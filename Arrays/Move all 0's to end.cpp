/*
  You are given an array arr[] of non-negative integers. 
You have to move all the zeros in the array to the right end while maintaining the relative order of the non-zero elements. 
The operation must be performed in place, meaning you should not use extra space for another array.
*/

class Solution {
  public:
    void pushZerosToEnd(vector<int>& arr) {
       
        int pos=0; //index to keep track of next non zero element position


      //fill all non zero elements in front using pos
        for(int i=0;i<arr.size();i++){
            if(arr[i]!=0){
                arr[pos]=arr[i];
                pos++;
            }
        }


      //fill all remaining positions with 0
        for(int i=pos;i<arr.size();i++){
            arr[i]=0;
        }
        
    }
};
