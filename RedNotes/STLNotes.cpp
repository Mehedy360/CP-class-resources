#include<bits/stdc++.h>
using namespace std;
int main(){
    
    // // declaring vector and sorting vector
    // vector<int> v = {1,2,4,3,6,7,8,329,25845};
    // sort(v.begin(),v.end());
    // for(int i = 0 ; i<v.size(); i++){
    //     cout<<v[i]<<"\n";
    // }
    
    
    // Sorting an ordinary Array
    // int n = 7;
    // int a [] = {2,3,5,7,4,77,8};
    // sort(a,a+n);
    // for(int i ; i<n ; i++){
    //     cout<<a[i]<<"\n";
    // }
    // Sorting a string with vector
    // string s = "monkey";
    // sort(s.begin(),s.end());
    // for(int i=0 ; i<s.size() ; i++){
    //     cout<<s[i]<<"\n";
    //     }
    
    
    // Sorting pair and printing it
    // vector<pair<int, int>> v;
    // v.push_back({2,5});
    // v.push_back({4,5});
    // v.push_back({20,30});
    // v.push_back({40,20});
    // v.push_back({60,20});
    // sort(v.begin(),v.end());
    // for(int i = 0 ; i<v.size(); i++){
    //     cout<<v[i].first<<" "<<v[i].second<<"\n";
    // }
    
    // declare vector 
    // vector<int> v;
    // v.push_back(2);
    // v.push_back(3);
    // v.push_back(5);
    // v.push_back(7);
    // cout<<v[0]<<" "<< v[1] <<" "<< v[2] << " "<< v[3]<<"\n";
    
    // Another way to initailize vector 
    // vector<int> v = {2,3,5,68};
    // for(int i = 0 ; i<v.size() ; i++){
    //     cout<<v[i]<<"\n";
    // }
    
    // Sort, reverse and shuffle in a vector
    // vector<int> v = {12,53,65,28,38,80};
    // sort(v.begin(), v.end());
    // reverse(v.begin(),v.end());
    // random_shuffle(v.begin(), v.end());
    // for(int x : v){
    //     cout<<x<<"\n";
    // }
    
    // cout<<*v.begin()<<"\n";
    
    // Sorting out a larger number and smaller number from a vector
    
    // vector<int> v = {2,3,3,5,7,8,8,8};
    // auto x = upper_bound(v.begin(),v.end(),5);
    // auto y = lower_bound(v.begin(),v.end(),5);
    // cout<<"The larger number is"<<*x<<"The lower number is"<<*y<<"\n";
    
    //NOTE that the above function will work correctly when the given range is sorted. The function use
    // binary search and find the requested element in logarithmic time
    
    // deque, if we need to manipulate the both ends of array we need to use deque
    // deque<int> d;
    // d.push_back(5);
    // d.push_back(3);
    // d.pop_back();
    // d.push_front(10);
    // d.push_front(12);
    // d.pop_front();
    // for(int x : d){
    //     cout<<x<<"\n";
    // }
    // // stack is like a one way glass pop and push both from the top also known as FIFO
    // stack<int> s;
    // s.push(23);
    // s.push(10);
    // s.push(12);
    // s.pop();
    // s.push(50);
    // cout<<s.top()<<"\n";
    //queue is LIFO means push in the last of the elements and out from the first of the elements
    // stack<int> s;
    // s.push(5);
    // s.push(10);
    // s.push(15);
    // s.pop();
    // cout<<s.top()<<"\n";
    
    // map can be used in this way 
    map<string, int> m;
    m["Monkey"] = 3;
    m["Banana"] = 6;
    m["Eaten"] = 4;
    m["Existed"] = 2;
    cout<<m["Existed"]<<"\n";
    for(auto x : m){
        cout<<x.first<<" " << x.second <<"\n";
    }
  return 0 ;  
}