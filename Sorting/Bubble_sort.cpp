// Key: Push the max to the last using adjacent swaps
#include<bits/stdc++.h>
using namespace std;        

void bubble_sort(int arr[],int n){
    for (int i = n-1; i >= 1; i--)
    {   
        bool swapped = false;
        for (int j = 0; j <= i-1; j++)
        {
            if(arr[j] > arr[j+1]){
                swap(arr[j],arr[j+1]);
                swapped = true;
            }
        }
        if(!swapped) break; // If no two elements were swapped by inner loop, then break
        
    }
    
}

int main(){
    int n;
    cin>>n;
    int arr[n];

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Before Sorting : "<<endl;
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }  
    cout<< endl;
    bubble_sort(arr,n);
    cout<<"After Sorting : "<<endl;
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }  
    
    return 0;
}
// TC : O(n^2)
// SC : O(1)

// Optimized TC: O(n) when array is already sorted *using swapped flag