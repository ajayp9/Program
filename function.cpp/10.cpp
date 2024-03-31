#include<bits/stdc++.h>
using namespace std;
//passing parrameter
void increment(int x,int y){
    x++;
    y=y+2;
    cout<<x<<" "<<y<<endl;
}
int main(){
    int a=10,b=20;
    increment(a,b);
    cout<<a<<" "<<b;
}