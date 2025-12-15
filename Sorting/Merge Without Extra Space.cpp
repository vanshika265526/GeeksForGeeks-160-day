/*
Given two sorted arrays a[] and b[] of size n and m respectively, the task is to merge them in sorted order without using any extra space. Modify a[] so that it contains the first n elements and modify b[] so that it contains the last m elements.

Examples:

Input: a[] = [2, 4, 7, 10], b[] = [2, 3]
Output: a[] = [2, 2, 3, 4], b[] = [7, 10]
Explanation: After merging the two non-decreasing arrays, we get, [2, 2, 3, 4, 7, 10]
*/
class Solution {
  public:
  
    int nextGap(int gap){
        if(gap<=1){
            return 0;
        }
        return (gap/2)+(gap%2);
    }
    void mergeArrays(vector<int>& a, vector<int>& b) {
        int n=a.size();
        int m=b.size();
        int gap=nextGap(n+m);
        while(gap>0){
            int i=0;
            int j=gap;
            while(j<n+m){
                if(i<n && j<n){
                    if(a[i]>a[j]){
                        swap(a[i],a[j]);
                    }
                }
                
                else if(i<n && j>=n){
                    if(a[i]>b[j-n]){
                        swap(a[i],b[j-n]);
                    }
                }
                else{
                    if(b[i-n]>b[j-n]){
                        swap(b[i-n],b[j-n]);
                    }
                }
                i++;
                j++;
            }
            gap=nextGap(gap);
        }
        
    }
};
