#include<bits/stdc++.h>
using namespace std;
   int maximumprofit(int budget[],int n){
    sort(budget , budget+n);
    int *output;
    output=new int[n];
    int j=n;
    for(int i=0;i<n;i++){
        output[i]=budget[i]*j;
        j--;
    }
    int max=output[0];
    for(int k=1;k<n;k++){
        if(max<output[k]){
            max=output[k];
        }
    }
    return max;
   }
int main(){
    int n;
    cin>>n;
    int *input;
    int *cost;
    input=new int[n];
    for(int i=0;i<n;i++){
        cin>>input[i];

    }
    cout<<maximumprofit(input, n)<<endl;
}