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

    int visited[m] = {0};
    vector<int> ans;

    for(int i=0; i<n; i++){
        for (int j = 0; j < m; j++) {
        {
            if(arr1[i] == arr2[j] && visited[j] == 0){
                ans.push_back(arr1[i]);
                visited[j] = 1;
                break;
            }
            if(arr1[i] < arr2[j]){
                break;
            }
        }
        
    }
        
    }
    cout<<endl<<"Here are the Intersection of 2 Arrays."<<endl;
        for (int i = 0; i < ans.size(); i++) {
            cout << ans[i] << " ";
        }   
        cout<<endl;
    return 0;
}