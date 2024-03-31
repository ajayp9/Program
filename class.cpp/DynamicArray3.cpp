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
    void operator=(DynamicArray const &d){//copy assiment operator jo ab value ko deep copy karega
        this->data = new  int[d.capacity];
        for(int i=0;i<d.nextIndex;i++){
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
    int get(int i){
        if(i<nextIndex){
            return data[i];
        }
        else{
            return -1;
        }
    }
    void add(int i, int element){
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

    
    DynamicArray d3;
    d3 = d1;   //copy assiment operator jo ki inbuilt h function mai isliye change kar rha h value ko
    d1.add(0, 100);
    d3.print();
}