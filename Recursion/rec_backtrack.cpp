#include<iostream>
using namespace std;

void print1_N(int i){
    if (i < 1)
    {
        return;
    }
    
    print1_N(i-1);
    cout<<i<< endl;
    
} 

void printN_1(int i,int n){
    if (i > n)
    {
        return;
    }
    
    printN_1(i+1,n);
    cout<<i<< endl;
}


int main(){
    int n;
    cin>>n;

    print1_N(n);
    printN_1(1,n);
    return 0;
}