#include<bits/stdc++.h>
using namespace std;

// int main(){
//     int n;
//     cout << "Finding the unique elements in the array." << endl;
//     cin >> n;
//     vector<int> arr(n);
//     for(int i = 0; i < n; i++){
//         cin >> arr[i];
//     }
//     cout << "The array is : ";
//     for(int i = 0; i < n; i++){
//         cout << arr[i] << " ";
//     }
//     cout<<endl;
//     set<int> s;
//     for(int i = 0; i < n; i++){
//         s.insert(arr[i]);
//     }
//     int index = 0;
//     for(auto it : s){
//         arr[index] = it;
//         index++;
//     }
//     cout << "The array after removing duplicates is : ";
//     for(int i = 0; i < index; i++){
//         cout << arr[i] << " ";
//     }
//     return 0;
// }

// TC : O(nlogn) + O(n)
// SC : O(n)
// It is heavy on space complexity as we are using a set to store the unique elements. 
// We can optimize it by using two pointers technique.

int uniqueEle(vector<int> &arr){
    int i = 0;
    for (int j = 1; j < arr.size(); j++)
    {
        if(arr[j] != arr[i] ){
            arr[i+1] = arr[j];
            i++;
        }
    }
    return (i+1);
    
}

int main(){
    int n;
    cout << "Finding the unique elements in the array." << endl;
    cin >> n;
    vector<int> arr(n);

    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    cout << "The array is : ";
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    cout<<endl;
    int len = uniqueEle(arr);
    for (int i = 0; i < len; i++)
    {
        cout<<arr[i];
    }
    return 0;

} 

// TC : O(n)
// SC : O(1)