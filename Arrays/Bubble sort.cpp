#include <iostream>
#include <vector>
using namespace std;

void bubbleSort(vector<int> &arr) {
    int n = arr.size();

    for (int i = 0; i < n - 1; i++) {

        bool swapped = false; // to optimize – stops if array becomes sorted

        for (int j = 0; j < n - i - 1; j++) {

            if (arr[j] > arr[j + 1]) {
                // swap
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;

                swapped = true;
            }
        }

        if (!swapped) break; // no swaps → already sorted
    }
}

int main() {
    vector<int> arr = {5, 1, 4, 2, 8};

    bubbleSort(arr);

    for (int x : arr) {
        cout << x << " ";
    }

    return 0;
}
