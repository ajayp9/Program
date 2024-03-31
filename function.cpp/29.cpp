#include<bits/stdc++.h>
using namespace std;
int main(){
    int row,col;
    cout<<"Enter the number of rows"<<endl;
    cin>>row;
    cout<<"Enter the number of columns"<<endl;
    cin>>col;
    //dynamic allocate memory of size row*col
    int *Arr = new int[row*col];
    //assign value to the allocated memory
    for(int i=0;i<row;i++)
        for(int j=0;j<col;j++)
            *(Arr + i*col + j) = rand()%100;
            //printing the 2d array
            for(int i=0;i<row;i++){
                for(int j=0;j<col;j++){
                    cout<<*(Arr+i*col+j)<<" ";
                }
                cout<<endl;
            }
       delete[] Arr;
       return 0; 
}