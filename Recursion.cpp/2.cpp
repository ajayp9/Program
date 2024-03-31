//add n numbers
#include<bits/stdc++.h>
using namespace std;

int sum(int n){
    if(n==0){
        return 0;
    }
    int smallsum = sum(n-1);
    int allsum = n+smallsum;
    return allsum;
}
int main(){
    int n;
    cin>>n;
    cout<<sum(n)<<"\n";
}