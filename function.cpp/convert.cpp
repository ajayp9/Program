#include<bits/stdc++.h>
using namespace std;
int n;
cout<<"enter n:"<<endl;
cin>>n;
int r;
cout<<"enter r"<<endl;
cin>>r>>endl;
if(r==2){
    binaryNumber[32];
    int i=0;
    while(n>0){
        binaryNumber[i] = n%2;
        n = n/2;
        i++;
    }
    for(int j=i-1;j>=0;j--)
    cout<<binaryNumber[j];
}