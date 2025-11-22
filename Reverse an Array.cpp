/*You are given an array of integers arr[]. You have to reverse the given array.

Note: Modify the array in place.
  */


class Solution {
  public:
    void reverseArray(vector<int> &arr) {
        // code here
        int left=0;
        int right=arr.size()-1;
        while(left<right){
            int new1=arr[left];
            arr[left]=arr[right];
            arr[right]=new1;
            left++;
            right--;
        }
    }
};
