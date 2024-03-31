#include<bits/stdc++.h>
using namespace std;
int main(){
    int row,col;
    cout<<"Enter the number of row"<<endl;
    cin>>row;
    cout<<"Enter the number of columns"<<endl;
    cin>>col;
    //dynamic create array of pointers of size row;
    int **Arr = new int *[row];
    //dynamic allocate memory of col size col for each row
    for(int i=0;i<row;i++)
    Arr[i] = new int[col];
    //Assigning value to the allocated memory
    for(int i=0;i<row;i++)
    for(int j=0;j<col;j++)
    Arr[i][j] = rand()%100;

    //printing the 2D array
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++)
        cout<<Arr[i][j]<<" ";
    
      cout<<endl;
    }
    //Deallocate memory using delete[] operator
    for(int i=0;i<row;i++)
    delete[] Arr[i];

    delete[] Arr;
    return 0;
}