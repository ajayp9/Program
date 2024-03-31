#include<bits/stdc++.h>
using namespace std;
class fraction{
    private:
    int numerator;
    int denominator;
    public:
    fraction(int numerator, int denominator){
        this->numerator = numerator;
        this->denominator = denominator;
    }
    void print(){
        cout<<numerator<<" / "<<denominator<<endl;
    }
    void simplify(){
        int gcd = 1;
        int j = min(this->numerator , this->denominator);
        for(int i=1;i<=j;i++){
            if(this->numerator%i==0 && this->denominator%i==0){
                gcd = i;
            }
        }
        this->numerator = this->numerator/gcd;
        this->denominator = this->denominator/gcd;
    }
    void add(fraction const &f2){
        int lcm = this->denominator*f2.denominator;
        int x = lcm/this->denominator;
        int y = lcm/f2.denominator;
        this->numerator = this->numerator*x + (f2.numerator*y);
        this->denominator = lcm;
        simplify();
    }
    void multiply(fraction const &f2){
        this->denominator = this->denominator*f2.denominator;
        this->numerator = this->numerator*f2.numerator;
        
        simplify();
    }
};
int main(){
    fraction f1(25, 2);
    fraction f2(12 , 5);
    int choice;
    cin>>choice;
    if(choice==1){
    f1.add(f2);
    f1.print();
    f2.print();
    }
    if(choice==2){
    f1.multiply(f2);
    f1.print();
    f2.print();
    }
    return 0;

}