//func overloading with changing the data type of arguments
#include<bits/stdc++.h>
using namespace std;
int add(int num1, int num2){
    return num1+num2;
}
double add(double num1, double num2){
    return num1+num2;
}
int main(void){
    cout<<add(10,20)<<endl;
    cout<<add(10.4,20.5)<<endl;
    return 0;
}