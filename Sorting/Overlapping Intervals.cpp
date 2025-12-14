/*
Given an array of Intervals arr[][], where arr[i] = [starti, endi]. The task is to merge all of the overlapping Intervals.

Examples:

Input: arr[][] = [[1, 3], [2, 4], [6, 8], [9, 10]]
Output: [[1, 4], [6, 8], [9, 10]]
Explanation: In the given intervals we have only two overlapping intervals here, [1, 3] and [2, 4] which on merging will become [1, 4]. Therefore we will return [[1, 4], [6, 8], [9, 10]].
*/

class Solution {
  public:
    vector<vector<int>> mergeOverlap(vector<vector<int>>& arr) {
        int n=arr.size();
        if(n==0) return {};
        
        //first sort
        sort(arr.begin(),arr.end());
        vector<vector<int>> result;
        result.push_back(arr[0]); //put first element into a new result array
        
        for(int i=1;i<n;i++){
            vector<int>& last=result.back();
            if(arr[i][0]<=last[1]){
                last[1]=max(last[1],arr[i][1]);
                
            }
            else{
                result.push_back(arr[i]);
            }
        }
        return result;
        
    }
};
