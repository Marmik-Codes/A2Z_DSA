#include<bits/stdc++.h>
using namespace std;

int secondLargest(vector<int>& nums){
    int largest = nums[0];
    int slargest = INT16_MIN;

    for (int i = 0; i < nums.size(); i++)
    {
        if (nums[i] > largest)
        {
            slargest = largest;
            largest = nums[i];
        }
        else if(nums[i] < largest && nums[i] > slargest){
            slargest = nums[i];
        }
        
    }
    return slargest;
}

int main(){
    cout << "Finding the second largest element in an array." << endl;
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    int slargest = secondLargest(arr);
    cout << "The second largest element in the array is : " << slargest << endl;
}