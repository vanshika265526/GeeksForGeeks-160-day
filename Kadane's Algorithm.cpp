/*
Kadane's Algorithm

You are given an integer array arr[]. You need to find the maximum sum of a subarray (containing at least one element) in the array arr[].

Note : A subarray is a continuous part of an array.
*/

class Solution {
  public:
    int maxSubarraySum(vector<int> &arr) {
        int n =arr.size(); //take size of array
        
        int currMax=arr[0];  //initilaise a variable current max 
        int ans=arr[0];  //variable for final answer value
        
        for(int i=1;i<n;i++){ //traversing starts at loop from 1 index
            int x=arr[i];  //stores value of current index
            
            currMax=max(x,currMax+x);  //take current max
            ans=max(ans,currMax);  //store max sum value in ans variable
        }
        return ans;    //after loop, whatever max sum comes, return it.
    }
};
