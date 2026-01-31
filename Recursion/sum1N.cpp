#include<iostream>
using namespace std;

// void f(int i,int sum){
//     if (i < 1)
//     {
//         cout<<sum;
//         return;
//     }
//     f(i-1,sum+i);
// }
// Using Functional Programming
// int f1(int i){
//     if (i == 0)
//     {
//         return 0;
//     }
//     return i + f1(i-1);
// }

//Factorial of a number
// int fact(int i){
//     if (i == 0)
//     {
//         return 1;
//     }
//     return i * fact(i-1);
// }

int main(){
    int n;
    cin>>n;

    // f(n,0);
    // cout<<f1(n);
    cout<<fact(n);
    return 0;
}