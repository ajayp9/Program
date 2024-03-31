#include<bits/stdc++.h>
using namespace std;
int main(){
    //null pointer
    /*int *ptr = NULL;
    cout<<"The value of ptr is"<<ptr;
    return 0;*/
    //double pointers
   /* int a=10;
    int *p=&a;
    int **q=&p;
    //print same value address of a
    cout<<&a<<endl;
    cout<<p<<endl;
    cout<<*q<<endl;
//print same value address of p
    cout<<&p<<endl;
    cout<<q<<endl;
    //print same value of a
    cout<<a<<endl;
    cout<<*p<<endl;
    cout<<**q<<endl;
    return 0;*/
    //void pointers
    void *ptr;
    int i=10;
    //assign int address to void
    ptr =&i;
    cout<<"Address of variable i"<<&i<<endl;
    cout<<"Address where the void pointer is pointing"<<ptr<<endl;
    return 0;
    }