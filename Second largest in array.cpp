/*
Given an array of positive integers arr[], return the second largest element from the array. If the second largest element doesn't exist then return -1.

Note: The second largest element should not be equal to the largest element.
  */
class Solution {
  public:
    int getSecondLargest(vector<int> &arr) {
        // take two variables and initialize with negative infinity
        int largest=INT_MIN;
        int second=INT_MIN;
        
        for(int i=0;i<arr.size();i++){
            
            if(arr[i]>largest){
                second=largest;
                largest=arr[i];
            }
            else if(arr[i]>second && arr[i]!=largest){
                second=arr[i];
            }
        }
        if(second==INT_MIN)return -1;
        return second;
        
    }
};
