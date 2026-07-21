#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,k,j,b,p;
    cin>>n>>k>>j>>b>>p;

    int banana_eat = b/k;
    int banana_left = b%k;

    int peanut_eat = p/j;
    int peanut_left = p%j;

    int left = n - (banana_eat + peanut_eat);

    if(banana_left != 0 || peanut_left != 0){
        left--;
    }
    cout<<left<<endl;   

    return 0;
}