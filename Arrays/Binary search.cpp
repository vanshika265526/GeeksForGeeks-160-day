//Implement binary search for a sorted array.

class Solution{
    int binarySearch(vector<int> &arr, int x)
{
  int l=0;
  int r=arr.size()-1;
  while(l<=r){
    int mid =(l+(r-l))/2;
    if(mid==arr[i]){
      return mid;
    }
    else if (arr[i]<mid){
        l=mid+1;
    }
    else{
        r=mid-1;
    }
  }
return -1;
}
};
    
