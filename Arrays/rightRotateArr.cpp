#include <bits/stdc++.h>
using namespace std;

void rightRotateArr(vector<int> &arr, int n, int d) {
    cout << endl << "Now rotating the Array to RIGHT by " << d << " places" << endl;

    d = d % n;  // Handle case when d > n

    // Step 1: Reverse last d elements
    reverse(arr.end() - d, arr.end());

    // Step 2: Reverse first n-d elements
    reverse(arr.begin(), arr.end() - d);

    // Step 3: Reverse whole array
    reverse(arr.begin(), arr.end());
}

int main() {
    int n, d;
    cin >> n >> d;

    vector<int> arr(n);

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << endl << "Here are the Array Elements." << endl;
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    rightRotateArr(arr, n, d);

    cout << "Rotated Array is: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    cout << endl;

    return 0;
}
