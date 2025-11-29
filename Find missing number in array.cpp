/*
Given an array arr[] of size n-1 with distinct integers in the range of [1, n]. 
This array represents a permutation of the integers from 1 to n with one element missing. Find the missing element in the array.
*/

class Solution{
      int missingNum(vector<int> &arr) {
          int n = arr.size() + 1; // increasing 1 in size of array for the missing element
          int sum = 0; 
          for (int i = 0; i < n - 1; i++)  //here -1 because we took one extra space for the missing element
              { 
                sum += arr[i]; 
              }

          //this is the expected sum but in long long so that no integer is overflowed
        long long expSum = (n * 1LL * (n + 1)) / 2;    //using formula n*(n+1)/2   and 1LL for long long multiplication

        return expSum - sum; //this will return the missing number
      }
};


          
