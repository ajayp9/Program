//array reverse
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=1;i<=n;i++){
        cin>>arr[i];
    }
    for(int j=n;j>=1;j--){
        cout<<arr[j]<<" ";
    }
    cout<<endl;

    return 0;
}