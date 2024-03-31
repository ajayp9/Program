//check if an array is sorted or not
#include<bits/stdc++.h>
using namespace std;

bool sorted(int arr[], int n){
    if(n==1){
        return true;
    }
    bool restArray = sorted(arr+1, n-1);//arr+1 mean 1st index aur(n-1) is size of array
    return (arr[0]<arr[1]  && restArray);
    }

    int main(){
        int arr[]={1,2,3,4,5};
        cout<<sorted(arr, 5)<<endl;
 
    }