#include<iostream>

#include<algorithm>

using namespace std;

class Fraction {
    private:
    // Complete the class
    int numerator;
    int denominator;
    public:
    Fraction(int numerator, int denominator){
        this->numerator=numerator;
        this->denominator=denominator;
    }
    
    void simplify(){
        int gcd=1;
        int j=min(this->numerator,this->denominator);
        for(int i=1;i<j;i++){
            if(this->numerator%i==0 && this->denominator%i==0){
                gcd = 1;
            }
        }
        this->numerator=this->numerator/gcd;
        this->denominator=this->denominator/gcd;
    }
    void add(Fraction const &f2){
        int lcm=denominator*f2.denominator;
        int x=lcm/denominator;
        int y=lcm/f2.denominator;
        int num=x*numerator+y*f2.numerator;
        numerator = num;
        denominator = lcm;
        int G=__gcd(numerator,denominator);
        numerator=numerator/G;
        denominator=denominator/G;
    }
    void multiply(Fraction const &f2){
        numerator=numerator*f2.numerator;
        denominator=denominator*f2.denominator;
        int G=__gcd(numerator,denominator);
        numerator=numerator/G;
        denominator=denominator/G;
    }
    void print(){
        cout<<numerator<<"/"<<denominator<<endl;
    }
};

int main() {

    //Write your code here
    int numerator1;
    int denominator1;
    cin>>numerator1>>denominator1;
    Fraction f1(numerator1,denominator1);
    int query,t,i;
    cin>>t;
    for(int i=1;i<=t;i++){
        cin>>query;
        int numerator2,denominator2;
        cin>>numerator2>>denominator2;
    Fraction f2(numerator2,denominator2);
    if(query==1){
        f1.add(f2);
        f1.print();
        
    }
    if(query==2){
        f1.multiply(f2);
        f1.print() ;
    }
    }
    return 0;
}