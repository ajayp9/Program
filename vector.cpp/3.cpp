#include<bits/stdc++.h>
#include<vector>
using namespace std;
int main(){
    vector<int>v;
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);


    v.push_back(23);
    v.push_back(234);

    v.pop_back();//delete last e;\lements
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<endl;

    }
}