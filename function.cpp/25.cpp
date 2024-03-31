#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	int n,x,y;
	int arr[n];
	cin>>n>>x>>y;
	for(int i=0;i<n;i++){
          cin>>arr[i];
	}
	int k=0;
	while(k<y){
	    sort(arr, arr+n);
	    arr[0]=arr[0]^x;
	    k++;
	}
	for(int i=0;i<n;i++){
	    cout<<arr[i]<<" ";
	}
	cout<<endl;
	}
	return 0;
}
