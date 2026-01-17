class Solution {
  public:
    int kthMissing(vector<int> &arr, int k) {
        int missingCount = 0;
        int current = 1;
        int i = 0;

        while (missingCount < k) {
            if (i < arr.size() && arr[i] == current) {
                i++; // number exists in array
            } else {
                missingCount++; // number is missing
                if (missingCount == k)
                    return current;
            }
            current++;
        }
        return -1;

        
    }
};
