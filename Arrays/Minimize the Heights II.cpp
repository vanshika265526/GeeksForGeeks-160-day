/*

Given an array arr[] denoting heights of n towers and a positive integer k.

For each tower, you must perform exactly one of the following operations exactly once.

Increase the height of the tower by k
Decrease the height of the tower by k
Find out the minimum possible difference between the height of the shortest and tallest towers after you have modified each tower.
*/

class Solution {
  public:
    int getMinDiff(vector<int> &arr, int k) {
        int n=arr.size();
        //first we will sort the order of the array so that smallest and largest working becomes easy for us
        sort(arr.begin(),arr.end());
        
        //then an initial/temp variable of current difference
        int currDif=arr[n-1]-arr[0];
        //variable for final ans
        int ans=currDif;
        
        //now we will apply +k to the smallest and -k to the largest element so far
        int smallest=arr[0]+k;
        int largest=arr[n-1]-k;
        
        //now we will try to find every possible couple which can give lowest diffrence
        for(int i=0;i<arr.size()-1;i++){
            //for negative conditions continue the loop and donot perform anything
            if(arr[i+1]-k<0) continue;
            int minCan=min(smallest,arr[i+1]-k);
            int maxCan=max(largest,arr[i]+k);
            ans=min(ans,maxCan-minCan);
            
            
            
        }
        return ans;
    }
};
