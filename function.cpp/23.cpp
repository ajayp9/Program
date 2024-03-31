#include<bits/stdc++.h>
using namespace std;
int main(){
   /* int **arr = new int*[n];
    for(int i=0;i<n;i++){
        arr[i] = new int[m];
    }
    return 0;*/
    int **arr = new int *[n];
    for(int i=0;i<n;i++){
        delete[] arr[i];
    }
    delete[] arr;
}