#include<bits/stdc++.h>
using namespace std;

void printnum(int n){
    if(n==0){
        return ;
    }
    cout<<n<<" ";
    printnum(n-1);
}
int main(){
    int n=6;
    printnum(n);
}