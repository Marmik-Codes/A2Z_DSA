#include<iostream>
using namespace std;    

void f(int i , int n,int arr[]){
    if(i >= n/2){
        return;
    }
    swap(arr[i],arr[n-i-1]);
    f(i+1 ,n,arr);
}

int main(){

    int n;
    int arr[n];

    cin >> n;

    for (int i = 0; i < n; i++)
        cin>>arr[i];
    cout<<"Array before reversing"<<endl;
    for (int i = 0; i < n; i++)
        cout<<arr[i];
    f(0,n,arr);
    cout<<endl;
    cout<<"Array after reversing"<<endl;
    for (int i = 0; i < n; i++)
        cout<<arr[i];
}