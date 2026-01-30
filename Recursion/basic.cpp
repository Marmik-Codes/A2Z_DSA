#include<iostream>
using namespace std;

void f(int i,int n){
    if (i > n)
    {
        return;
    }
    cout << "Marmik"<<endl;
    f(i+1,n);
}

void printInc(int i,int n){
    if (i > n)
    {
        return;
    }
    cout << i << endl;
    printInc(i+1,n);
     
}

void printDec(int i){
    if (i < 1)
    {
        return;
    }
    cout << i << endl;
    printDec(i-1);
     
}

void printN_1(int n){
    if (n < 1)
    {
        return;
    }
    

    cout<<n<< endl;
    printN_1(n-1);
} 



int main(){

    int n;
    cin>>n;

    // f(1,n);
    // printInc(1,n);
    // printDec(n);
    printN_1(n);
    return 0;
}