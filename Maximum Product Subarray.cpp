/*
Maximum Product Subarray
Given an array arr[] that contains positive and negative integers (may contain 0 as well). Find the maximum product that we can get in a subarray of arr[].

*/

class Solution {
  public:
    int maxProduct(vector<int> &arr) {
        //take size of array first
        int n=arr.size();
        //initilalise variable with currmax and currmin to keep track
        int currMax=arr[0];
        int currMin=arr[0];
        //a final ans variable
        int ans=arr[0];
        
        //start loop traversing from 1 because 0 already taken above
        for(int i=1;i<n;i++){
            //a variable to store current value to compare
            int x=arr[i];

            //take max value out of three and use {} for multiple values
            int tempMax=max({x,currMax*x,currMin*x});
            int tempMin=min({x,currMax*x,currMin*x});

          
            currMax=tempMax;
            currMin=tempMin;
            ans=max(currMax,ans);
        }
        return ans;
    }
};
