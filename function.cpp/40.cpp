//sort 0 1 2
#include <bits/stdc++.h>
using namespace std;

void sort012(int arr[], int n) {
    //Write your code here
    int countZero = 0;
    int countOne = 0;
    int countTwo = 0;
    for(int i=0;i<n;i++){
        if(arr[i]==0){
            countZero++;
        }
        if(arr[i]==1){
            countOne++;
        }
        if(arr[i]==2){
            countTwo++;
        }
    }
    int index = 0;
    for(int i=0;i<countZero;i++){
        arr[index] = 0;
        index++;
    }
    for(int i=0;i<countOne;i++){
        arr[index] = 1;
        index++;
    }
    for(int i=0;i<countTwo;i++){
        arr[index] = 2;
        index++;
    }
}

int main() {
    int t;
    cin >> t;

    while (t > 0) {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        sort012(arr, n);
        for (int i = 0; i < n; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
        t--;
    }
    return 0;
}