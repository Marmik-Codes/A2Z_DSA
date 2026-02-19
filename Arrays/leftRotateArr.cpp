// Brute Force Approach

#include<bits/stdc++.h>
using namespace std;

// int main(){
//     int n ;
//     cin>>n;

//     vector<int> arr(n);

//     for (int i = 0; i < n; i++)
//     {
//         cin>>arr[i];
//     }
//     cout<<endl;

//     cout<<"Here are the Array Elements."<<endl;
//     for (int i = 0; i < n; i++)
//     {
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl<<"Now rotating the Array by 1 place"<<endl;

//     int temp = arr[0];
//     for (int i = 1; i < n; i++)
//     {
//         arr[i-1] = arr[i];
//     }
//     arr[n-1] = temp;
    
//     cout<<"Rotated Array is: ";
//     for (int i = 0; i < n; i++)
//     {
//         cout<<arr[i]<<" ";
//     }
//     return 0;
    
// }
// TC : O(n)
// SC : O(1)


// Now Left Rotate the Array by D places
// Means D = D%N rotations , means if D = 20 then we need to rotate the array by 20%N times only.
// So if arr has 7 ele then 20%7 = 6 times only we need to rotate the array.

// void leftRotateArr(vector<int> &arr , int n , int d){
//     cout<<endl<<"Now rotating the Array by "<<d<<" places"<<endl;
    
//     d = d%n; // To handle the case when D is greater than N

//     vector<int> temp;
//     // Storing the first D elements in a temporary array
//     for (int i = 0; i < d   ; i++)
//     {
//         temp.push_back(arr[i]);
//     }

//     // Shifting the remaining elements to the left
//     for (int i = d; i < n; i++)
//     {
//         arr[i-d] = arr[i];
//     }

//     // Push back the first D elements to the end of the array
//     for (int i = n-d; i < n; i++)
//     {
//         arr[i] = temp[i - (n-d)];
//     }
    
    
// }

// int main(){
//     int n , d;
//     cin>>n>>d;

//     vector<int> arr(n);

//     for (int i = 0; i < n; i++)
//     {
//         cin>>arr[i];
//     }
//     cout<<endl;

//     cout<<"Here are the Array Elements."<<endl;
//     for (int i = 0; i < n; i++)
//     {
//         cout<<arr[i]<<" ";
//     }
//     leftRotateArr(arr , n ,d);

//     cout<<"Rotated Array is: ";
//     for (int i = 0; i < n; i++)
//     {
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;

//     return 0;
    
// }

// TC: O(n+d)
// SC: O(d)


// Optimal Approach : Using Reversal Algorithm

void leftRotateArr(vector<int> &arr , int n , int d){
    cout<<endl<<"Now rotating the Array by "<<d<<" places"<<endl;
    
    d = d%n; // To handle the case when D is greater than N

    // Step 1: Reverse the first D elements
    reverse(arr.begin() , arr.begin() + d);

    // Step 2: Reverse the remaining N-D elements
    reverse(arr.begin() + d , arr.end());

    // Step 3: Reverse the whole array
    reverse(arr.begin() , arr.end());
}

int main(){
    int n , d;
    cin>>n>>d;

    vector<int> arr(n);

    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    cout<<endl;

    cout<<"Here are the Array Elements."<<endl;
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    leftRotateArr(arr , n ,d);

    cout<<"Rotated Array is: ";
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    return 0;
}

// TC: O(n)
// SC: O(1) due to in-place reversal of the array.