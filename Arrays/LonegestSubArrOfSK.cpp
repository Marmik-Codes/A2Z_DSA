#include<bits/stdc++.h>
using namespace std;

// Brute Force Approach
int LSA(vector<int>& arr,int k){
    int n = arr.size();
    int maxlen = 0;
    for (int i = 0; i < n; i++)
    {
        int sum = 0;

        for (int j = i; j < n; j++)
        {
            sum += arr[j];
            if (sum == k)
            maxlen = max(maxlen, (j - i) + 1);
        }
        
    }
    return maxlen;
}

// optimal approach  
int LSA(vector<int>& arr , int k) {
    int n = arr.size();
    int maxlen = 0;
    int s = arr[0];
    int l = 0 , r = 0;

    while(r < n){
        while(l <= r && s > k){
            s -= arr[l];
            l++;
        }
        if(s == k) maxlen =  max(maxlen , r-l+1);
        r++;
        if(r < n ) s += arr[r];
    }
    return maxlen;
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

    int k = 3;   // Given K = 3

    int result = LSA(arr, k);

    cout << "Length of Longest Subarray with Sum " << k << " is: " << result << endl;

    return 0;
}
// TC: O(2n) where n is the size of the input array
// SC: O(1) as we are using only a constant amount of extra space.