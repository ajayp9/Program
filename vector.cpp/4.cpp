#include<bits/stdc++.h>
#include<vector>
using namespace std;
int main(){
    vector<int>v;

    for(int i=0;i<100;i++){
        v.push_back(i+1);
    }
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);


    v.pop_back();
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<endl;
    }
}