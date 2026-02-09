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

int secondsmallest(vector<int>& nums){
    int smallest = nums[0];
    int ssmallest = INT16_MAX;

    for (int i = 0; i < nums.size(); i++)
    {
        if (nums[i] < smallest)
        {
            ssmallest = smallest;
            smallest = nums[i];
        }
        else if(nums[i] != smallest && nums[i] < ssmallest){
            ssmallest = nums[i];
        }
        
    }
    return ssmallest;
}

int main(){
    cout << "Finding the second largest element in an array." << endl;
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    cout << "The array is : ";
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    int slargest = secondLargest(arr);
    cout << "The second largest element in the array is : " << slargest << endl;
    
    int ssmallest = secondsmallest(arr);
    cout << "The second smallest element in the array is : " << ssmallest << endl;

    return 0;
}