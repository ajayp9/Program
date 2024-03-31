#include<bits/stdc++.h>
using namespace std;
class ComplexNumber{
    private:
    int real;
    int imaginary;
    public:
    ComplexNumber(int real, int imaginary){
        this->real = real;
        this->imaginary = imaginary;
    }
    void print(){
        cout<<this->real<<" + "<<imaginary<<"i"<<endl;
    }
    void plus(ComplexNumber const &c2){
        this->real = this->real + c2.real;
        this->imaginary = this->imaginary + c2.imaginary;
    }
    void multiply(ComplexNumber const &c2){
        int r = (this->real*c2.real) - (this->imaginary*c2.imaginary);
        int i =  (this->real*c2.imaginary) + (this->imaginary*c2.real);
        this->real=r;
        this->imaginary=i;
    }

};
int main(){
    int real1,imaginary1;
    int real2,imaginary2;
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
    if(choice == 2){
   c1.multiply(c2);
   c1.print();
    }
    return 0;
}