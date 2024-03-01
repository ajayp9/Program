#include<bits/stdc++.h>
#include <vector>
using namespace std;
int main(){
    //vector<int>*vp=new vector<int>();
    vector<int> v;
    v.push_back(10);//element store
    v.push_back(20);
    v.push_back(30);
    
    v[1]=100;

    v[3]=1002;
    v[4]=1234;

    v.push_back(23);
    v.push_back(234);
    cout<<v[0]<<endl;
    cout<<v[1]<<endl;
    cout<<v[2]<<endl;
    cout<<v[3]<<endl;
    cout<<v[4]<<endl; 
cout<<"size: " <<v.size()<<endl;
    cout<<v.at(2)<<endl;
    cout<<v.at(6)<<endl;
}