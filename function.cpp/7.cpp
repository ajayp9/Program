#include<bits/stdc++.h>
using namespace std;
//fun with argument but no return type
void checkEvenOdd(int num){
    if(num%2==0)
    cout<<"Even Number";
    else
    cout<<"Odd Number";
}
int main(){
    int num = 35;
    checkEvenOdd(num);
    return 0;
}