/*
Given an array of integers arr[]. You have to find the Inversion Count of the array. 
Note : Inversion count is the number of pairs of elements (i, j) such that i < j and arr[i] > arr[j].

Examples:

Input: arr[] = [2, 4, 1, 3, 5]
Output: 3
Explanation: The sequence 2, 4, 1, 3, 5 has three inversions (2, 1), (4, 1), (4, 3).
  */

class Solution {
  public:
    
    long long merge(vector<int> &arr, vector<int> &temp, int left, int mid, int right){
        long long invCount=0;
        int i=left;
        int j=mid+1;
        int k=left;
        while(i<=mid && j<=right){
            if(arr[i]<=arr[j]){
                temp[k++]=arr[i++];
            }
            else{
                temp[k++]=arr[j++];
                invCount+=(mid-i+1);
            }
        }
        while(i<=mid){
            temp[k++]=arr[i++];
        }
        while(j<=right){
            temp[k++]=arr[j++];
        }
        for(int x=left;x<=right;x++){
            arr[x]=temp[x];
        }
        return invCount;
    }
    
   long long mergeSort(vector<int> &arr, vector<int> &temp, int left, int right){
        long long invCount=0;
        if(left<right){
            int mid=left+(right-left)/2;
            invCount+=mergeSort(arr,temp,left,mid);
            invCount+=mergeSort(arr,temp,mid+1,right);
            invCount+=merge(arr,temp,left,mid,right);
        }
        return invCount;
  
   }
    int inversionCount(vector<int> &arr) {
        int n=arr.size();
        vector<int> temp(n);
        return mergeSort(arr,temp,0,n-1);
        
    }
};
