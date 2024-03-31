//Add two array
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    int m;
    cin>>n>>m;
    int arr1[n];
    int arr2[m];
    int r=0;
    //taking input in  array
    for(int i=0;i<n;i++){
        cin>>arr1[i];
    }
    //taking input in arr2
    for(int i=0;i<m;i++){
        cin>>arr2[i];
    }
    for(int i=0;i<n;i++){
        r = r+arr1[i];
    }
    for(int i=0;i<m;i++){
        r = r+arr2[i];
    }
    cout<<r;
    return 0;
}