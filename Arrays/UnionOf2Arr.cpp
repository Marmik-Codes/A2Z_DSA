#include<bits/stdc++.h>
using namespace std;

int main() {
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

    // step-1
    set<int> s;
    for (int i = 0; i < n; i++)
    {
        s.insert(arr1[i]);
        
    }
    
    for (int i = 0; i < m; i++)
    {
        s.insert(arr2[i]);
    }
    

    // step-2
    vector<int> ans;
    for (auto it : s)
    {
        ans.push_back(it);
    }
    // step-3

    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }

    return 0;
    
}
     