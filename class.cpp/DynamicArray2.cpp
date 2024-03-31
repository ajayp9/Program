#include<bits/stdc++.h>
using namespace std;
class DynamicArray{
    private:
    int *data;
    int nextIndex;
    int capacity;  // total size
    public:
    DynamicArray(){
        data = new int[5];
        nextIndex = 0;
        capacity = 5;
    }
    DynamicArray(DynamicArray const &d){//copy constructor jo banaya gya h ab h deep copy karega koi
        this->data = new int[d.capacity];//bhi change nhi karega  aur yha par d me d1 array h aur 
        for(int i=0;i<d.nextIndex;i++){ //this me d2 array h 
            this->data[i] = d.data[i];
        }
        this->nextIndex = d.nextIndex;
        this->capacity = d.capacity;
    }
    void add(int element){
        if(nextIndex==capacity){
            int *newdata = new int[2*capacity];
            for(int i=0;i<capacity;i++){
                newdata[i] = data[i];
            }
            delete[] data;
            data = newdata;
            capacity = 2*capacity;
        }
        data[nextIndex] = element;
        nextIndex++;
    }
    int get(int i){   //index functio yh check kar karega ki nextindex kha h mere reng me h ya nhi
        if(i<nextIndex){
            return data[i];
        }
        else{
            return -1;
        }
    }
    void add(int i, int element){ //yha par i index h aur ellement ko fill karna h uske position par
        if(i<nextIndex){
            data[i] = element;
        }
        else if(i == nextIndex){
            add(element);
        }
        else{
            return;
        }
    }
    void print(){
        for(int i=0;i<nextIndex;i++){
            cout<<data[i]<<" ";
        }
        cout<<endl;
    }

};
int main(){
    DynamicArray d1;

    d1.add(10);
    d1.add(20);
    d1.add(30);
    d1.add(40);
    d1.add(50);
    d1.add(60);

    d1.print();
    DynamicArray d2(d1);  //copy constructor 
    d1.add(0 , 100);  // yhe a par d1 ke 0 index par 100 fill kar rha hu
    d2.print();
}