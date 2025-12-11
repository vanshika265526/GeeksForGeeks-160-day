#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> arr(n);
    for(int i = 0; i < n; i++)
        cin >> arr[i];


    //result array for storing result
    vector<int> result;

    for(int i = 0; i < n; i++) {
        bool alreadySeen = false;

        // check previous elements
        for(int j = 0; j < i; j++) {
            if(arr[j] == arr[i]) {
                alreadySeen = true;
                break;
            }
        }

        if(!alreadySeen)
            result.push_back(arr[i]);
    }

    // print
    for(int x : result)
        cout << x << " ";

    return 0;
}
