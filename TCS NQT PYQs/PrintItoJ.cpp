#include<bits/stdc++.h>
using namespace std;

int SumItoJ(int i, int j){

    return (j*(j+1)/2) - (i*(i-1)/2);
}

int main(){
    int i, j;
    cin>>i>>j;
    
    cout<<SumItoJ(i,j);

    return 0;
}