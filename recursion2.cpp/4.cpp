#include<bits/stdc++.h>
using namespace std;

void MergeSort(int arr[],int size){
    if(size==0||size==1){
        return;
    }
    int left=size/2;
    int right=size-left;
    for(int i=0;i<left;i++){
        for(int j=left;j<size;j++){
            if(arr[i]>arr[j]){
                int temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    if(size%2==0){
        MergeSort(arr , left);
        MergeSort(arr+left , left);
    }
    else{
        MergeSort(arr , left);
        MergeSort(arr+left, left+1);
    }

}
int main(){
    int n;
    cin>>n;
    int *arr=new int[n];
    cout<<"arr elements"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    MergeSort(arr , n);
   for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}