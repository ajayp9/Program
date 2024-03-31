#include<bits/stdc++.h>
using namespace std;
bool ajay(int *arr, int n,int start,int lsum,int rsum){
    if(start==n){
        return lsum==rsum;
    }
    if(arr[start]%5==0){
        lsum=lsum+arr[start];
    }
    else if(arr[start]%3==0){
        rsum=rsum+arr[start];
    }
    else{
        return ajay(arr,n,start+1,lsum+arr[start],rsum) ||ajay(arr,n,start+1,lsum,rsum+arr[start]);
    }
    return ajay(arr,n,start+1,lsum,rsum);
}
bool splitArray(int *arr,int n){
    return ajay(arr,n,0,0,0);
}

int main(){
   int size;
   cin>>size;
   int *input=new int[1+size];
   for(int i=0;i<size;i++){
    cin>>input[i];
   }
   if(splitArray(input,size)){
    cout<<"true"<<endl;
   }
   else{
    cout<<"false"<<endl;
   }
   return 0;
}