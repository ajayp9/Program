#include<bits/stdc++.h>
using namespace std;
void printDivisors(int num){
    for(int i=1;i<=num;i++){
        if(num%i==0){
            cout<<i<<" ";
        }
    }
}
int main(){
    int n;
    cin>>n;
    printDivisors(n);
    return 0;
}