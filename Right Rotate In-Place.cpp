//WITH STL ALGORITHM
class Solution {
public:
    void rightRotate(vector<int>& arr, int d) {
        int n = arr.size();
        d = d % n;   //FOR BIG VALUES

        //F1. ENTIRE REVERSE, 2. REVERSE START TO D, 3. REVERSE D TO END
        reverse(arr.begin(), arr.end());
        reverse(arr.begin(), arr.begin() + d);
        reverse(arr.begin() + d, arr.end());
    }
};


//WITHOUT STL
class Solution {
public:
    void myReverse(vector<int>& arr, int l, int r) {
        while(l < r) {
            swap(arr[l], arr[r]);
            l++;
            r--;
        }
    }

    void rightRotate(vector<int>& arr, int d) {
        int n = arr.size();
        d = d % n;
        myReverse(arr, 0, n - 1);
        myReverse(arr, 0, d - 1);
        myReverse(arr, d, n - 1);
    }
};
