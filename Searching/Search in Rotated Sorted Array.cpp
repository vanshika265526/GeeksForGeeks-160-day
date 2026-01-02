/*
Given an array arr[] of distinct elements, which was initially sorted in ascending order but then rotated at some unknown pivot, the task is to find the index of a target key.  If the key is not present in the array, return -1.

Examples :

Input: arr[] = [5, 6, 7, 8, 9, 10, 1, 2, 3], key = 3
Output: 8
Explanation: 3 is found at index 8.
Input: arr[] = [3, 5, 1, 2], key = 6
Output: -1
Explanation: There is no element that has value 6.*/

class Solution {
  public:
    int search(vector<int>& arr, int key) {
        // Code Here
        for(int i=0;i<arr.size();i++){
            if(arr[i]==key){
                return i;
            }
        }
        return -1;
    }
};
