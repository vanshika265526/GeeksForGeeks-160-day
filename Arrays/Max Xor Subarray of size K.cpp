/*
Given an array of integers arr[]  and a number k. Return the maximum xor of a subarray of size k.

Note: A subarray is a contiguous part of any given array.

Examples:

Input: arr[] = [2, 5, 8, 1, 1, 3], k = 3
Output: 15
Explanation: arr[0] ^ arr[1] ^ arr[2] = 15, which is maximum.
Input: arr[] = [1, 2, 4, 5, 6] , k = 2
Output: 6
Explanation: arr[1] ^ arr[2] = 6, which is maximum.

  */

class Solution {
  public:
    int maxSubarrayXOR(vector<int>& arr, int k) {
        int n=arr.size();
        int currxor=0;
        for(int i=0;i<k;i++){
            currxor^=arr[i];
        }
        int maxxor=currxor;
        for(int i=k;i<n;i++){
            currxor^=arr[i-k];
            currxor^=arr[i];
            maxxor=max(currxor,maxxor);
        }
        return maxxor;
    }
};
