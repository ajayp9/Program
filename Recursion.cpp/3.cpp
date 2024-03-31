#include<bits/stdc++.h>
using namespace std;

int pow(int n,int p){
    if(n==0){
        return 0;
    }
    if(p==0){
        return 1;
    }
    int smalloutput=pow(n,(p-1));
    return n*smalloutput;
}
int main(){
    int n;
    cin>>n;
    int p;
    cin>>p;
    cout<<pow(n,p)<<endl;
}