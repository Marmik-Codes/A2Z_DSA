#include<bits/stdc++.h>
using namespace std;

void printSB(int index, vector<int> arr, vector<int> &sb, int n){
    // base case
    if (index == n){
        // print the subsequence
        for (auto it : sb){
            cout << it << " ";
        }
        if (sb.size()== 0) cout << "{}"; // to represent empty subsequence
        cout << endl;
        return;
    }

    // include the element at index
    sb.push_back(arr[index]);
    printSB(index + 1, arr, sb, n);

    // exclude the element at index
    sb.pop_back();
    printSB(index + 1, arr, sb, n);
}

int main(){
    vector<int> arr = {3, 1, 2};
    int n = arr.size();
    vector<int> sb;
    printSB(0, arr, sb, n);
    return 0;
}

// TC = O(2^n)*n
// SC = O(n) (recursion stack space)