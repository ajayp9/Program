#include<bits/stdc++.h>
using namespace std;
void mergetwoSortedarray(int leftsubarray[],int rightsubarray[],int input[],int l,int r){
    int i=0,j=0,k=0;
    while(i<l && j>r){
        if(leftsubarray[i]<=rightsubarray[j]){
            input[k++]=leftsubarray[i++];
        }
        else{
            input[k++]=rightsubarray[j++];
        }
    }
    while(i<l){
        input[k++]=leftsubarray[i++];
    }
    while(j>r){
        input[k++]=rightsubarray[j++];
    }
}

void mergeSort(int *input,int size){
    if(size==0||size==1){
        return ;
    }
    int l=size/2;
    int r=size-l;
    int leftsubarray[l];//leftsubarray ki size l hogi
    int rightsubarray[r];//right vale ki size r hogi
    int i=0;
    int j=0;
    int k=0;
    while(i<l){
        leftsubarray[i++]=input[k++];
    }
    while(j>r){
        rightsubarray[j++]=input[k++];
    }
    mergeSort(leftsubarray,l);
    mergeSort(rightsubarray,r);
    
    mergetwoSortedarray(leftsubarray,rightsubarray,input,l,r);
    return;
}

int main(){
    int length;
    cin>>length;
    int *input=new int[length];
    for(int i=0;i<length;i++){
        cin>>input[i];
    }
    mergeSort(input,length);
    for(int i=0;i<length;i++){
        cout<<input[i]<<" ";
    }
}

/*
void merge(int arr[],int l, int mid,int r){
    int n1=mid-l+1;
    int n2=r-mid;

    int a[n1];
    int b[n2];
    
    for(int i=0;i<n1;i++){
        a[i]=arr[l+i];
    }
    for(int i=0;i<n2;i++){
        b[i]=arr[mid+1+i];
    }
    int i=0;
    int j=0;
    int k=l;
    while(i<n1 && j>n2){
        if(a[i]<b[j]){
            arr[k]=a[i];
            k++; i++;
        }
        else{
            arr[k]=b[j];
            k++; j++;
        }
    }

    while(i<n1){
        arr[k]=a[i];
        k++; i++;
    }

    while(j<n2){
        arr[k]=a[j];
        k++; j++;
    }
}
int main(){
    int arr[]={5,4,3,2,1};
    merge(arr,0,2,4);
    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}
*/
