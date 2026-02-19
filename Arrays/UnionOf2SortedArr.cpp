#include<bits/stdc++.h>
using namespace std;

int main(){

    int n, m;
    cin >> n >> m;

    vector<int> arr1(n);
    vector<int> arr2(m);

    cout<<endl<<"Enter the Array Elements for First Array."<<endl;
    for (int i = 0; i < n; i++) {
        cin >> arr1[i];
    }
    cout<<endl<<"Enter the Array Elements for Second Array."<<endl; 
    for (int i = 0; i < m; i++) {
        cin >> arr2[i];
    }

    cout << endl << "Here are the Array Elements." << endl;
    for (int i = 0; i < n; i++) {
        cout << arr1[i] << " ";
    }
    cout << endl;
    for (int i = 0; i < m; i++) {
        cout << arr2[i] << " ";
    }
    cout << endl;

    int i = 0, j = 0;
    vector<int> unionarr;

    while(i<n && j<m){
        if(arr1[i] <= arr2[j]){
            if(unionarr.size() == 0 || unionarr.back() != arr1[i]){
                unionarr.push_back(arr1[i]);
            }
            i++;
        }
        else{
           if(unionarr.size() == 0 || unionarr.back() != arr2[j]){
                unionarr.push_back(arr2[j]);
            }
            j++; 
        }
    }

    while (i<n)
    {
        if(unionarr.size() == 0 || unionarr.back() != arr1[i]){
                unionarr.push_back(arr1[i]);
            }
            i++;
    }
    while (j<m)
    {
        if(unionarr.size() == 0 || unionarr.back() != arr2[j]){
                unionarr.push_back(arr2[j]);
            }
            j++; 
    }
    
    

    for (int i = 0; i < unionarr.size(); i++)
    {
        cout<<unionarr[i] << " ";
    }
    
    return 0;
}