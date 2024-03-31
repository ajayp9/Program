#include<bits/stdc++.h>
using namespace std;

   /* int findunique(int arr[],int n){

        int find = arr[0];
        int count =0;
        for(int i=0;i<n;i++){
            if(arr[i]!=find){
                count++;
            }
        }
        if(count==1){
            return find;
        }
        int smallans=findunique(arr+1,n-2);
        return smallans;
    }


int main(){
    int n;
    cin>>n;
    int arr[7]={4 5 6 6 5 4 2};

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
   cout<<findunique(arr , n)<<endl;
}*/
int FindUnique(int arr[], int n){
     
     if(sizeof(arr)==0){
        return;
     }
    int i=0;
    int j=0;
    for(i=0;i<n;i++){
        for(j=1;j<n;j++){
            if(arr[i]==arr[j] && i!=j){
             break;
            }
        }
        if(j==n){
            return arr[i];
        }
    }
    return -1;

}

    int main(){
        int n;
        cin>>n;
        int arr[]={ 2, 6, 9, 6, 2};
        cout<<FindUnique(arr,n)<<endl;
    }
