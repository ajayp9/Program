//factorial
#include<bits/stdc++.h>
using namespace std;

int fact(int n){
    if(n==0){
        return 1;
    }
    int smallfact=fact(n-1);
    int output=n*smallfact;
    return output;
}
int main(){
    int n;
    cin>>n;
    cout<<fact(n)<<endl;
}