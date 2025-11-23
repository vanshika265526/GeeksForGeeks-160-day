/*
Given an array of integers arr[] representing a permutation, implement the next permutation that rearranges the numbers into
the lexicographically next greater permutation.
If no such permutation exists, rearrange the numbers into the lowest possible order (i.e., sorted in ascending order). 
*/

class Solution {
public:
        void nextPermutation(vector<int>& arr) {
        int n = arr.size();
        
        // Step 1: Find the breach from the right
        int i = n - 2;
        while (i >= 0 && arr[i] >= arr[i + 1]) {
            i--;
        }
        
        // Step 2: If breach found, find the next greater element & swap
        if (i >= 0) {
            int j = n - 1;
            while (arr[j] <= arr[i]) j--;
            swap(arr[i], arr[j]);
        }
        
        // Step 3: Reverse the suffix
        reverse(arr.begin() + i + 1, arr.end());
    }
};
