#include<bits/stdc++.h>
using namespace std;

int firstIndices(int arr[],int size, int h ){
    if(size==0){
        return -1;
    }
    if(arr[0]==h){
        return 0;
    }
    int ans =firstIndices(arr+1,size-1, h);

    if(ans==-1){
        return -1;
    }
    else{
        return ans+1;
    }
}
int main(){

    int arr[]={2,3,5,7,9};
    cout<<firstIndices(arr,5,5)<<endl;
}