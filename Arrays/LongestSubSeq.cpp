#include <bits/stdc++.h>
using namespace std;

// Linear Search
bool contains(const vector<int>& arr, int num) {
    for (int element : arr) {
        if (element == num)
            return true;
    }
    return false;
}

int longestSubSeq(const vector<int>& arr) {
    int longest = 0;

    for (int num : arr) {

        int current = num;
        int count = 1;

        while (contains(arr, current + 1)) {
            current++;
            count++;
        }

        longest = max(longest, count);
    }

    return longest;
}

int main() {

    int n;
    cin >> n;

    vector<int> arr(n);

    for (int &x : arr)
        cin >> x;

    cout << longestSubSeq(arr);

    return 0;
}