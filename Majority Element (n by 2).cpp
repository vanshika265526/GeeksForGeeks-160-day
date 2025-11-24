/*
Given an array arr[] consisting of n integers,
the task is to find the element which occurs more than floor(n/2) times.

If no such element exists, return an empty vector.
  */

class Solution {
public:
    vector<int> findMajorityNby2(vector<int>& arr) {
      int n = arr.size();
        int floorvalue = n / 2;
      int candidate = -1;
        int count = 0;
      for (int x : arr) {
            
            if (x == candidate) {
                count++;
            }
            
            else if (count == 0) {
                candidate = x;
                count = 1;
            }
            
            else {
                count--;
            }
        }
        count = 0;
        for (int x : arr) {
            if (x == candidate) count++;
         }
         vector<int> result;
         if (count > floorvalue) result.push_back(candidate);
        return result;
        }
  };
