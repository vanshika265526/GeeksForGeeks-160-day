/*
You are given a circular array arr[] of integers, find the maximum possible sum of a 
non-empty subarray. In a circular array, the subarray can start at the end and wrap around to the beginning. 
  Return the maximum non-empty subarray sum, considering both non-wrapping and wrapping cases.
  */

class Solution {
  public:
    int maxCircularSum(vector<int> &arr) {
        
        int n=arr.size();
        int total=0;
        int currMax=0,maxSum=INT_MIN;
        int currMin=0,minSum=INT_MAX;
        for(int x:arr){
            total+=x;
            currMax=max(x,x+currMax);
            maxSum=max(maxSum,currMax);
            
            currMin=min(x,currMin+x);
            minSum=min(currMin,minSum);
        }
        if(maxSum<0) return maxSum;
        return max(maxSum,total-minSum);
        
    }
};
