//print number in increasing order
#include<bits/stdc++.h>
using namespace std;

void inc(int n){
    if(n==0){
        return;
    }
    inc(n-1);
    cout<<n<<endl;
}
int main(){
    int n;
    cin>>n;
    inc(n);
}