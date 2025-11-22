/*
Given an array arr[]. Rotate the array to the left (counter-clockwise direction) by d steps, 
where d is a positive integer. Do the mentioned change in the array in place.
*/

class Solution {
  public:

    // Function to rotate an array by d elements in counter-clockwise direction.
    void rotateArr(vector<int>& arr, int d) {
        // code here
        
        int size=arr.size();
        //this is to handle larger value cases
        d=d%size;
        
        //for left rotation- basic startegy is 1. reverse first d elements, 2. reverse next after d elements, 3. reverse entire array
        reverse(arr.begin(),arr.begin()+d);
        reverse(arr.begin()+d,arr.end());
        reverse(arr.begin(),arr.end());
        
        //reverse is an inbuilt function in <algorithm>
    }
};
