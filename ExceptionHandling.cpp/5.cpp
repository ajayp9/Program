#include<bits/stdc++.h>
using namespace std;
int main(){
    try{
        int age=12;
        if(age>=18){
            cout<<"you are eligible to vote";
        }
        else{
            throw  -1;
        }
    }
    catch(...){
        cout<<"Sorry you are not eligible to vote"<<endl;
    }
}