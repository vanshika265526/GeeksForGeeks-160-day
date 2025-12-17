/*
Given a 2D array intervals[][], where intervals[i] = [starti, endi]. Return the minimum number of intervals you need to remove to make the rest of the intervals non-overlapping.

Note: Two intervals are considered non-overlapping if the end time of one interval is less than or equal to the start time of the next interval.

Examples:

Input: intervals[][] = [[1, 2], [2, 3], [3, 4], [1, 3]]
Output: 1
Explanation: [1, 3] can be removed and the rest of the intervals are non-overlapping.
  */

class Solution {
  public:
    int minRemoval(vector<vector<int>> &intervals) {
        int n=intervals.size();
        sort(intervals.begin(),intervals.end(),
        [](vector<int>& a, vector<int>& b){
            return a[1]<b[1];
        });
        int count=1;
        int lastEnd=intervals[0][1];
        for(int i=1;i<n;i++){
            if(intervals[i][0]>=lastEnd){
                count++;
                lastEnd=intervals[i][1];
            }
        }
        return n-count;
        
    }
};
