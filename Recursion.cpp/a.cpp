#include<bits/stdc++.h>
using namespace std;
/*int main(){
    int *ptr = 0;
int a = 10;
*ptr = a;
cout << *ptr << endl;

}*/
/*int countzero(int n){

    if(n==0){
        return 1;
    }
    int k=n%10;
    int ans=countzero(n/10);
    if(k==0){
        return ans+1;
    }
    else{
        return ans;
    }
}
int main(){
    int n;
    cin>>n;
    cout<<countzero(n)<<endl;
}*/
/*int countzeros(int n){
    static int count = 0;
    if(n==0){
        return count;
    }
    if(n%10==0){
        count++;
    }
    else{
        int k=n/10;
        countzeros(k);
    }
}
int main(){
    int n;
    cin>>n;
    cout<<countzeros(n)<<endl;
}*/

int countZero(int n){
     static int count=0;
    if(n==0){
        return 1;
    }
    int k=n%10;
    if(k==0){
        count++;
    }
    int ans=countZero(n/10);
    return count;
}
int main(){
    int n;
    cin>>n;
    cout<<countZero(n)<<endl;
}