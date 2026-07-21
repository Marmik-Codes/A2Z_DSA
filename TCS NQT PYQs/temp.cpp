#include <bits/stdc++.h>
using namespace std;

char fun(char arr[], int n){
    char ans= '\0';
    unordered_map<char , int>mpp;

    for(int i=0 ; i<n ;i++){
        mpp[arr[i]]++;
    }
    for(int i=0 ; i<n ; i++){
        if(mpp[arr[i]] %2 !=0){
            ans = arr[i];
            break;
        }
    } 
    return ans;
}



int main(){

    // When size of an array not given

    
 
    // Comma separated and space separated values
    // string s;
    // getline(cin , s);
    
    // stringstream ss(s);

    // vector<int> arr;
    // string temp;

    // while (getline(ss,temp,','))
    // {
    //     int num = stoi(temp);
    //     arr.push_back(num);
    // }
    
    // for(int a: arr){
    //     cout<<a<<" ";
    // }

    // string s;
    // cin>>s;

    // int star = 0, hash =0;
    // for(char ch : s){
    //     if(ch == '*') star++;
    //     else if(ch == '#') hash ++;

    // }
    // cout<<star - hash;

    // int n;
    // cin>>n;

    // vector<int>arr(n);

    // for(int i=0;i<n;i++){
    //     cin>>arr[i];
    // }
    // int cnt =1;
    // int maxi = arr[0];

    // for(int i=1;i<n;i++){
    //     if(arr[i] > maxi){
    //         cnt ++;
    //         maxi = arr[i];
    //     }
    // }
    // cout<< cnt;

    int n ;
    cin>>n;
    char arr[n];
    
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    
    char ans = fun(arr,n);

    if(ans == '\0') cout<<"All are even";
    else cout<<ans<<endl;
    return 0;
}