#include<bits/stdc++.h>
using namespace std;

string LongestStrPrefix(vector<string>& strs){
    if(strs.empty()){
        return "";
    }
    sort(strs.begin(),strs.end());
    string first = strs.front();
    string last = strs.back();

    string ans ="";
    int n = min(first.size(),last.size());

    for (int i = 0; i < n; i++)
    {
        if(first[i] == last[i]){
            ans += first[i];
        }
        else break;
    }
    return ans;
}


int main(){

    vector<string> strs = {"flower", "flow", "flight"};

    cout<<LongestStrPrefix(strs);

    return 0;
}