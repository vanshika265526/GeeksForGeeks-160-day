/*Given an integer array arr[] and a number k. Find the count of distinct elements in every window of size k in the array.

Examples:

Input: arr[] = [1, 2, 1, 3, 4, 2, 3], k = 4
Output: [3, 4, 4, 3]
Explanation:
First window is [1, 2, 1, 3], count of distinct numbers is 3.
Second window is [2, 1, 3, 4] count of distinct numbers is 4.
Third window is [1, 3, 4, 2] count of distinct numbers is 4.
Fourth window is [3, 4, 2, 3] count of distinct numbers is 3.
*/

class Solution {
  public:
    vector<int> countDistinct(vector<int> &arr, int k) {
        unordered_map<int,int> freq;
        vector<int> result;
        //build frequency for the first window
        for(int i=0;i<k;i++)
        {
            freq[arr[i]]++;
        }
        result.push_back(freq.size());
        for(int i=k;i<arr.size();i++){
            freq[arr[i-k]]--;
            if(freq[arr[i-k]]==0){
                freq.erase(arr[i-k]);
            }
            freq[arr[i]]++;
            result.push_back(freq.size());
            
        }
        return result;
        
    }
};
