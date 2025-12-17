/*
Given a sorted array, arr[] and a number target, you need to find the number of occurrences of target in arr[]. 

Examples :

Input: arr[] = [1, 1, 2, 2, 2, 2, 3], target = 2
Output: 4
Explanation: target = 2 occurs 4 times in the given array so the output is 4.
*/
class Solution {
  public:
    int countFreq(vector<int>& arr, int target) {
        return upper_bound(arr.begin(),arr.end(),target)-lower_bound(arr.begin(),arr.end(),target);
}
};
