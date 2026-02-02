// Key: Take an element & place it in its correct order 
// for eg: Like we do while playing cards

#include<bits/stdc++.h>
using namespace std;

void insertionSort(int arr[],int n){
    for (int i = 0; i <= n-1; i++)
    {
        int j = i;
        while (j > 0 && arr[j-1] > arr[j])
        {
            swap(arr[j-1],arr[j]);
            j--;
        }
        
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
    insertionSort(arr,n);
    cout<<"After Sorting : "<<endl;
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}

/* 
arr = {5, 3, 4, 1, 2}
n = 5

[5, 3, 4, 1, 2]


Pass 1 (i = 0)
j = 0
j > 0 is false

No comparison or swap
Array:
[5, 3, 4, 1, 2]

--------------------------------------------------------------------
Pass 2 (i = 1)
j = 1

Compare arr[0] > arr[1] → 5 > 3 (true)
Swap 5 and 3

j becomes 0 → loop stops
Array:
[3, 5, 4, 1, 2]
--------------------------------------------------------------------

Pass 3 (i = 2)
j = 2

Compare arr[1] > arr[2] → 5 > 4 (true)
Swap 5 and 4 → j = 1

Compare arr[0] > arr[1] → 3 > 4 (false)
Array:
[3, 4, 5, 1, 2]
--------------------------------------------------------------------

Pass 4 (i = 3)
j = 3

Compare 5 > 1 → swap → j = 2
Compare 4 > 1 → swap → j = 1
Compare 3 > 1 → swap → j = 0

Array:
[1, 3, 4, 5, 2]
--------------------------------------------------------------------

Pass 5 (i = 4)
j = 4

Compare 5 > 2 → swap → j = 3
Compare 4 > 2 → swap → j = 2
Compare 3 > 2 → swap → j = 1
Compare 1 > 2 → false

Array:
[1, 2, 3, 4, 5]

*/