#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> arr(n);
    cout<<endl<<"Enter the Array Elements."<<endl;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << endl << "Here are the Array Elements." << endl;
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    int sum = (n * (n + 1)) / 2;
    int actualSum = 0;

    for (int i = 0; i < n; i++) {
        actualSum += arr[i];
    }

    int missingNumber = sum - actualSum;
    cout << endl << "The Missing Number is: " << missingNumber << endl;

    return 0;
}
// TC: O(n) SC: O(1)
