#include<bits/stdc++.h>
using namespace std;

bool isSorted(vector<int> arr){
    for (int i = 1; i < arr.size(); i++)
    {
        if (arr[i] > arr[i-1])
        {
            
        }
        else{
            return false;
        }
        
    }
    return true;
}

int main(){
    int n;
    cout << "Finding whether the array is sorted or not." << endl;
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

    if(isSorted(arr))
        cout<<"Array is sorted";
    else cout<<"Array is not sorted" ;
    return 0;
}
