/*
Given an array of integers arr[]  and a number k. Return the maximum sum of a subarray of size k.

Note: A subarray is a contiguous part of any given array.

Examples:

Input: arr[] = [100, 200, 300, 400], k = 2
Output: 700
Explanation: arr2 + arr3 = 700, which is maximum.
Input: arr[] = [1, 4, 2, 10, 23, 3, 1, 0, 20], k = 4
Output: 39
Explanation: arr1 + arr2 + arr3 + arr4 = 39, which is maximum.
*/

class Solution {
  public:
    int maxSubarraySum(vector<int>& arr, int k) {
      
        int currSum=0;
        for(int i=0;i<k;i++){      //calculates first k elements sum
            currSum+=arr[i];
        }
        
        int Maxsum=currSum;
        for(int i=k;i<arr.size();i++){
            currSum+=arr[i];   //add new element
            currSum-=arr[i-k];   //remove old element
            Maxsum=max(currSum,Maxsum);
        }
        return Maxsum;
        
    }
};
