//find maximum and minimum in the array
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int max = arr[0], min = arr[0];
    for(int i=1;i<n;i++){
        if(max<arr[i])
        max = arr[i];
        if(min>arr[i])
        min = arr[i];
    }
    cout<<"Maximum value =" << max <<"\n";
    cout<<"Minimum value =" << min<<"\n";
    return 0;
}