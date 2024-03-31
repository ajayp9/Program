#include<bits/stdc++.h>
using namespace std;
class ComplexNumber{
    private:
    int real;
    int imaginary;
    public:
    ComplexNumber(int real , int imaginary){
        this->real=real;
        this->imaginary=imaginary;
    }
    void print(){
        cout<<this->real<<" + "<<this->imaginary <<"i"<<endl;
    }
    void plus(ComplexNumber c2){
        int l=real+c2.real;
        int r=imaginary+c2.imaginary;
        real=l;
        imaginary=r;
    }
    void multiply(ComplexNumber c2){
        int l1=real*c2.real - imaginary*c2.imaginary;
        int r1=real*c2.imaginary + imaginary*c2.real;
        this->real=l1;
       this->imaginary=r1;
    }
};
int main(){
    int real1,imaginary1,real2,imaginary2;
    cin>>real1>>imaginary1;
    cin>>real2>>imaginary2;

    ComplexNumber c1(real1 , imaginary1);
    ComplexNumber c2(real2 , imaginary2);
    int choice;
    cin>>choice;
    if(choice==1){
        c1.plus(c2);
        c1.print();
    }
    else if(choice==2){
        c1.multiply(c2);
        c1.print();
    }
    else{
        return 0;
    }
}
