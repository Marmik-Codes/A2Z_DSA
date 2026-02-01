#include<iostream>
using namespace std;

bool isPalindrome(int i, string &s){
    if (i >= s.size()/2) return true;
    
    if (s[i] != s[s.size()-i-1]) return false;
    return isPalindrome(i+1,s);
}

int main(){

    string s;
    cin>>s;

    if (isPalindrome(0,s)){
        cout<<"The string is a palindrome"<<endl;
    } else {
        cout<<"The string is not a palindrome"<<endl;
    }

    return 0;
}