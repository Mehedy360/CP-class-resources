#include<bits/stdc++.h>
using namespace std;
    bool comp ( pair<int, int> p , pair <int , int >q){
    
        if(p.first - p.second< q.first - q.second)
                return true;
            else
                return false;
          
        
    }
int main(){
    string str = "Bangladesh" ;
    for(int i=0; i<= str.size();i++){
        cout<<str[i]<<"\n";
    }
    str +=" Dhaka ";
    cout<<str<<"\n";
    find out max and min between two
    int a = 1, b = 10 ;
    cout<<max(a, b)<<"\n";
    cout<<min(a,b)<<"\n";
    swap(a,b);
    cout<<a<<" "<<b<<"\n";
    int x=10;
    float y=20.00;
    cin>>x>>y;
    pair<int, float> z;
    z.first = 10;
    z.second= 20;
    pair<int , float> u;
    u.first = 30;
    u.second = 50;
    swap(z,u);
    cout<<z.first<<"\n"<<z.second<<"\n";
    make_pair(1,3); 
    vector<int> v;
    vector<string> s;
    // vector<double> f;
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    v.push_back(40);
    v.push_back(50);
    v.push_back(60);
    cout<<v[0]<<" "<<v[1]<< " " <<v[2];
    s.push_back("Bangladesh");
    s.push_back("Desh");
    cout<<s[0]<<s[1]<<"\n";
    f.push_back[10.00];
    f.push_back[20.00];
    cout<<f[0]<<f[1]<<"\n";
    for(int i=0 ; i<v.size();i++){
        cout<<v[i]<<"\n";
    }
    v.pop_back();
    v.pop_back();
    v.pop_back();
    for(int i=0 ; i<v.size(); i++){
        cout<<v[i]<<"\n";
    }
    v.clear();
    cout<<v.size()<<"\n";
    vector<int> w(5,-1);
    for(int i=0 ;i<=w.size();i++){
          cout<<w[i];
        
    }
    w.resize(3);
    for(int i = 0 ; i<=w.size(); i++){
        cout<<w[i]<<"\n";
    }
    for(int x : w){
        cout<<x<<"\n";
    }
    vector<string>str;
    str.push_back("Bangladesh");
    str.push_back("Dim");
    for(int i =0 ; i<=str.size() ; i++){
        cout<<str[i]<<"\n";
    }
    vector<string> str2(str);
    for(int i=0 ; i<=str2.size() ; i++){
        cout<<str2[i]<<"\n";
    }
    vector<int>v(5);
    v[0]=10;
    v[1]=20;
    v[2]=30;
    v[3]=40;
    v[4]=50;
    vector<int>::iterator it = v.begin();
    cout<<*it<<"\n";
    it+=1;
    cout<<*it<<"\n";
    vector<int>:: 
    // for(int i =0 ; i<=v.size() ; i++){
    //     it+=1;
    //     cout<<*it<<"\n";
    vector<int> w(6);
    w[0]=100;
    w[1]=200;
    w[2]=300;
    w[3]=400;
    sort(w.begin(),w.end());
    for(int x : w){
        cout<<x<<"\n";
    }
    find(w.begin(),w.end(),100);
    for(int y: w)
    cout<<y<<"\n";
    vector<vector<int>> v2d(3);
    v2d[0,0].push_back(12);
    v2d[0,1].push_back(23);
    v2d[0,2].push_back(25);
    
    v2d[1,0].push_back(42);
    v2d[1,1].push_back(35);
    v2d[1,2].push_back(50);
    cout<<v2d[1][1]<<"\n";
    vector<int> v(5);
    for(int i=0 ; i<v.size(); i++){
        cin>>v[i];
    }
    sort(v.begin(),v.end());
    for(int x : v ){
        cout<<x<<"\n";
    }
    vector<pair<int, int>> v(5) ;
    for(int i = 0 ; i<v.size(); i++){
        cin>>v[i].first;
        v[i].second=i;
    }
    sort(v.begin(),v.end());
    for(int i = 0 ; i<v.size() ; i++){
        cout<<v[i].second<<"\n";
    }

    vector<pair<int,int>> v(3);
    v[0] = make_pair(3,0);
    v[1] = make_pair(5,0);
    v[2] = make_pair(4,9);
    sort(v.begin(), v.end() , comp);
    for(int i =0; i<v.size(); i++ ){
        cout<<v[i].first<<" "<<v[i].second<<"\n";
    }
    set<int> str;
    str.insert(20);
    str.insert(20);
    str.insert(10);
    str.insert(30);
    str.insert(5);
    for(int x : str){
        cout<<x<<"\n";
    }
    str.erase(5);
    for(int x : str){
    cout<<x<<"\n";}
    if(str.count(10)<2){
        cout<<"We have found the number"<<"\n";
    }
    else{
        cout<<"We have not found the number"<<"\n";
    }
    cout<<st.size()<<"\n"; 
    map<string, int> mp;
    mp["abc"] = 20;
    mp["def"] = 30;
    mp["xyz"] = 50;
    cout<<mp["def"]<<"\n";
    mp["def"] = 10;
    cout<<mp["def"]<<"\n";
    cout<<mp["pcd"]<<"\n";
    cout<<mp.size()<<"\n";
    if(mp.count("def")>0){
        cout<<"We have found the map"<<"\n";
    }
    else{
        cout<<"We do not found the map"<<"\n";
    }
    for(pair<string,int>p:mp){
        cout<<p.first<<" "<<p.second<<" \n ";
    }
    map<int,int> mp;
    int n;
    cin>>n;
    for(int i=0 ; i<n ; i++){
        int x;
        cin>>x;
        if(mp.count(x)>0){
            cout<<"duplicate"<<mp[x]<<"\n";
            mp[x]++;
        }
    }
    return 0;
}