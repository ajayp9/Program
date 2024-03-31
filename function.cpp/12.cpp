//passing parameter pass by reference
#include<bits/stdc++.h>
using namespace std;
void fun(int &x){
    x=50;
    cout<<"Value of x in fun function:"<<x<<endl;
}
int main(){
    int x=10;
    fun(x);
    cout<<"Value of x in main function:"<<x;
}