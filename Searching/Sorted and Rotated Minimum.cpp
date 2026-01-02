/*
A sorted array of distinct elements arr[] is rotated at some unknown point, the task is to find the minimum element in it. 

Examples:

Input: arr[] = [5, 6, 1, 2, 3, 4]
Output: 1
Explanation: 1 is the minimum element in the array.
Input: arr[] = [3, 1, 2]
Output: 1
Explanation: Here 1 is the minimum element.
  */

class Solution {
  public:
    int findMin(vector<int>& arr) {
        // complete the function here
        int min=arr[0];
        for(int i=0;i<arr.size();i++){
            if(arr[i]<min){
                min=arr[i];
            }
        }
        return min;
    }
};
