//factorial
#include<bits/stdc++.h>
using namespace std;

int factorial(int n){
    if(n==0){
        return 1;
    }
    int smalloutput=factorial(n-1);
    int ans=smalloutput*n;
    return ans;
}

int main(){
    int n;
    cin>>n;
    int ans=factorial(n);
    cout<<ans<<endl;
}