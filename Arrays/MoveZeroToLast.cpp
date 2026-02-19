#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    vector<int> arr(n);

    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    cout << endl << "Here are the Array Elements." << endl;
    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
    cout<<endl;
    // vector<int> temp;

    // // step - 1
    // for(int i=0; i<n; i++){
    //     if(arr[i] != 0){
    //         temp.push_back(arr[i]);
    //     }
    // }

    // // step-2
    // int nz = temp.size();
    // for (int i = 0; i < nz; i++)
    // {
    //     arr[i] = temp[i];
    // }
    
    // // step-3
    // for (int i = nz; i < n; i++)
    // {
    //     arr[i] = 0;
    // }
    
    // // After Array
    // for (int i = 0; i < n; i++)
    // {
    //     cout << arr[i]<<" ";
    // }
    
    // Optimized Approach:
    // We can do this in single traversal of array with O(1) space.
    
    // step-1
    int j = -1;
    for (int i = 0; i < n; i++)
    {
        if(arr[i] == 0){
            j = i;
            break;
        }
    }
    // step-2
    for (int i = j+1 ; i < n; i++)
    {
        if (arr[i] != 0)
        {
            swap(arr[i],arr[j]);
            j++;
        }
        
    }
    
    for (int i = 0; i < n; i++)
    {
        cout<< arr[i]<<" ";
    }
    cout<<endl;

    return 0;
}
// TC:O(n) + O(n-x) + O(x) => O(2n) => O(n)
// SC: O(n-x) => O(n) in worst case when all elements are non-zero.

