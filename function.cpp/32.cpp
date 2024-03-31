//find an elements present in array or not
#include<bits/stdc++.h>
using namespace std;
int search(int arr[], int n, int x){
    int i;
    for(i=0;i<n;i++)
    if(arr[i]==x)
    return i;
    return -1;
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    //taking input
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int x;
    cin>>x;
    int r = search(arr, 10, x);
    if(r == -1)
    cout<<"Element is not present in array";
    else 
    cout<<"Element is present at index"<<r;
    return 0;
}