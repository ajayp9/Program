#include<bits/stdc++.h>
using namespace std;
//reference and pass by reference
/*int main(){
   /* int a=5;
    int b=a;
    a++;
    cout<<"b="<<b<<endl;
    return 0;*/

   /* int a=5;
    int &b = a;
    //&b=a mean that now variables b and a are pointing to the same address and making changes in any of them both reflected
    a++;
    cout<<"b ="<<b<<endl;
    return 0;*/

    void fun(int &a){
        a++;
    }
    int main(){
        int a = 5;
        fun(a);
        cout<<"a ="<<a<<endl;
    }
