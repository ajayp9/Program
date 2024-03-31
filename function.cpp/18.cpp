//all prime no. between two number
#include<bits/stdc++.h>
using namespace std;
int isPrime(int n){
    if(n<=0){
        return 0;
    }
    for(int i=2;i<=n/2;i++){
        if(n%i==0){
            return 0;
        }
    }
    return 1;
}
int totalPrime(int s, int e){
    int count=0;
    for(int i=s;i<=e;i++){
        if(isPrime(i)==1){
            count++;
        }
    }
    return count;
}
int main(){
    int S,E;
    cin>>S>>E;
    cout<<totalPrime(S,E);
    return 0;
}