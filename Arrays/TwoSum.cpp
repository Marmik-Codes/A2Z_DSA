#include<bits/stdc++.h>
using namespace std;

string sum_2(vector<int>& arr, int k){
    int n = arr.size();
    sort(arr.begin(), arr.end());
    int l = 0, r = n-1;

    while ( l < r)
    {
        int sum = arr[l] + arr[r];
        if(sum == k){
            return "Yes";
        }
        else if(sum < k) l++;
        else r--;
    }
    return "No";
}

int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    vector<int> arr(n);

    cout << "Enter elements: ";
    for(int i = 0; i < n; i++){   
        cin >> arr[i];
    }

    int k;
    cout << "Enter the target sum (K): ";
    cin >> k;

    cout<< sum_2(arr, k);

    return 0;
}

// Variety 2

//  vector<int> twoSum(vector<int>& nums, int target) {
        // int n = nums.size();
        // map<int,int> mpp;
        // for(int i=0; i<n; i++){
        //     int a = nums[i];
        //     int more = target - a;
        //     if(mpp.find(more) != mpp.end()){
        //         return {mpp[more],i};

        //     }
        //     mpp[a] = i;
        // }
        // return{-1,-1};
