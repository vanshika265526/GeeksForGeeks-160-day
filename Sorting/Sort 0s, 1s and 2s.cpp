/*
Given an array arr[] containing only 0s, 1s, and 2s. Sort the array in ascending order.
Note: You need to solve this problem without utilizing the built-in sort function.

Examples:

Input: arr[] = [0, 1, 2, 0, 1, 2]
Output: [0, 0, 1, 1, 2, 2]
Explanation: 0s, 1s and 2s are segregated into ascending order.
Input: arr[] = [0, 1, 1, 0, 1, 2, 1, 2, 0, 0, 0, 1]
Output: [0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 2, 2]
Explanation: 0s, 1s and 2s are segregated into ascending order.
  */

class Solution {
  public:
    void sort012(vector<int>& arr) {
        int low=0; //pointer for left side elements 0
        int mid=0; //pointer for checking
        int high=arr.size()-1;  //pointer for right side elements 2
      
        while(mid<=high){
            if(arr[mid]==0){     //case1= when 0 found, increase left and mid and swap low to mid
                swap(arr[low],arr[mid]);
                low++;
                mid++;
            }
            else if(arr[mid]==1){    //when 1 found increase mid
                mid++; 
            }
            else{     //when 2 found and swap from mid to high
                swap(arr[mid],arr[high]);
                high--;
            }
        }
        
    }
};
