#include<bits/stdc++.h>
using namespace std;

int largestElement(vector<int>& nums) {
        int largest = nums[0];
        for(int i = 0 ; i < nums.size() ; i++){
            if(nums[i] > largest){
                largest = nums[i];
            }
        }
    return largest;
}

int main(){
    cout << "Finding the largest element in an array." << endl;
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    int largest = largestElement(arr);
    cout << "The largest element in the array is : " << largest << endl;
}