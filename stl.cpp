#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {

    // Pair Container


    // pair<int,int> p = {1,3};
    // cout << p.first << " " << p.second << endl;

    // pair<int,pair<int,int>> p1 = {1,{3,4}};
    // cout << p1.first << " " << p1.second.first << " " << p1.second.second << endl;

    // pair<int,int> arr[] = {{1,2}, {3,4}, {5,6}};
    // cout << arr[1].first << endl;
    
    // Vector Container

    // vector<int> v;

    // v.push_back(1);
    // v.emplace_back(2);  // similar to push_back but it faster than push_back

    // vector<pair<int,int>>vec ;
    // v.push_back({1,2});
    // v.emplace_back(1,2);  // emplace_back doesn't require curly braces , it automatically knows that it a pair.

    // vector<int> v(5,100);       // it means v[100,100,100,100,100]
    // vector<int> v(5);           // it means v[0,0,0,0,0] or some garbage values
    // cout << v[0];

    // Accessing the vector elements

    // v.push_back(10);
    // v.push_back(20);
    // v.push_back(30);
    // v.push_back(40);
    // v.push_back(50);

    // vector<int>::iterator it = v.begin();
    // vector<int>::iterator it = v.end();    // v[10,20,30,40,50] *end projects the address after 50 
    // vector<int>::iterator it = v.rend();
    // vector<int>::iterator it = v.rbegin();

    // cout<< *(it);

    // cout << v.back();

    // Using for loop


    // for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
    // {
    //     cout<< *(it) << " ";
    // }
    
    // Using STL in short

    // for (auto it = v.begin(); it < v.end(); it++)
    // {
    //     cout<< *(it) << " ";
    // }
    
    // for (auto it : v)
    // {
    //     cout<< it << " ";
    // }

    // Erase function
    // v.erase(v.begin()+1);

    // for (auto it : v)
    // {
    //     cout<< it << " ";
    // }

    // Insert Function

    // vector<int> v(2,100);   // [100,100]
    // v.insert(v.begin(),300);    // [300,100,100]
    // v.insert(v.begin()+1,2,10); // [300,10,10,100,100]


    // List 
    // list<int> ls;
    // ls.push_back(1);
    // ls.push_back(2);
    // ls.push_back(3);
    // ls.push_back(4);
    // ls.push_back(5);
    // ls.push_front(1100);
    // for(auto it : ls){
    //     cout << it << " ";
    // }
    
    // stack<int> st;
    // st.push(1);
    // st.push(2);
    // st.push(3);
    // st.push(4);
    // st.push(5);

    // // cout << st.top();
    
    // // int a = st.top();
    // // st.pop();
    // cout << st.size() ;

    // queue<int> q;
    // q.push(1);
    // q.push(2);
    // q.push(3);
    // q.push(4);
    // q.push(5);

    // cout << q.front();
    
    // Priority Queue 

    // priority_queue<int> pq;

    // pq.push(10);
    // pq.push(9);
    // pq.push(20);
    // pq.push(6);

    // cout << pq.top();
 
    // Set -> sorted and Unique

    set<int> st;
    st.insert(1);
    st.insert(2);
    st.insert(2);
    st.insert(4);
    st.insert(3);

    


    return 0;
}