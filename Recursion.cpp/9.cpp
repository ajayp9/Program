//cheak any number in arr present or not if h to ptint index
#include<bits/stdc++.h>
using namespace std;

int firstocc(int arr[], int size, int i, int search){
    if(i==size){
        return -1;
    }
    if(arr[i]==search){
        return 1;
    }
    return firstocc(arr,size,i+1,search);
}
int main(){
    int arr[]={4,2,1,2,5,2,7};
    cout<<firstocc(arr, 7, 0, 2)<<endl;
}