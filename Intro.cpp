#include<iostream> 
using namespace std;

int main() {
    // cout << "Hello, World!" << endl;
    string s = "Marmik";
    cout << s << endl;
    int len = s.length();
    cout << len<< endl;
    s[len - 1] = 's';
    cout<< s << endl;
    return 0;

}
