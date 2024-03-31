//find first index in array
#include<bits/stdc++.h>
using namespace std;
int firstIndex(int arr[],int size, int x){
    if(size==0){
        return -1;
    }
    if(arr[0]==x){
        return 0;
    }
    int ans = firstIndex(arr+1,size-1,x);
    if(ans==-1){
        return -1;
    }
    else {
        return ans+1;
            }
}

int main(){
    int n,x;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cin>>x;
    cout<<firstIndex(arr,n,x)<<endl;
    return 0;
}