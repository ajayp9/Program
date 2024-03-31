#include<bits/stdc++.h>
using namespace std;
//passing parrameter pass by value
void fun(int x){
    x=50;
    cout<<"Value of x in fun function:"<<x<<endl;
}
int main(){
    int x=10;
    fun(x);
    cout<<"Value of x in main function"<<x;
}