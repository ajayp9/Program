//nth fibonacci number 
#include<bits/stdc++.h>
using namespace std;

int fibo(int n){
    if(n==0){
        return 0;
    }
    if(n==1){
        return 1;
    }

    int output=fibo(n-1)+fibo(n-2);
    return output;
}
int main(){
    int n;
    cin>>n;
    cout<<fibo(n)<<endl;
}