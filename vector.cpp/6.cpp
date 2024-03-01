#include<bits/stdc++.h>
#include<vector>
using namespace std;
int main(){
    vector<int>v;

    for(int i=0;i<100;i++){
        cout<<"cap:"<<v.capacity()<<endl;
        cout<<"size:"<<v.size()<<endl;
        v.push_back(i+1);
    }
}