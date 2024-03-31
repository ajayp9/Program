#include<bits/stdc++.h>
using namespace std;
class Polynomial{
    public:
    int *degCoeff;//name of array
    int capacity;
    Polynomial(){
        this->degCoeff=new int[100];
        this->capacity=100;
    }
    //make paramaterized constructor for defining with capacity
    Polynomial(int capacity){
        this->degCoeff = new int[capacity+1];
        this->capacity = capacity;
    }
    Polynomial(Polynomial const &p){
        int *newdeg = new int[p.capacity+1];
        for(int i=0;i<p.capacity;i++){
            newdeg[i] = p.degCoeff[i];
        }
        this->degCoeff = newdeg;
        this->capacity = p.capacity;
    }
    void setCoefficient(int deg , int coef){
        if(deg>capacity){
            int newcapacity = deg;
            int *newdeg = new int[newcapacity+1];
            for(int i=0;i<=capacity;i++){
                newdeg[i]=degCoeff[i];
            }
            this->degCoeff = newdeg;
            this->capacity = newcapacity;
            degCoeff[deg] = coef;
        }
        else{
            degCoeff[deg] = coef;
        }
    }
    Polynomial operator+(Polynomial const &p2){
        int newcap = max(this->capacity , p2.capacity);
        Polynomial p3(newcap);
        for(int i=0;i<=newcap;i++){
            if(i<=capacity && i<=p2.capacity){
                p3.degCoeff[i] = this->degCoeff[i] + p2.degCoeff[i];
            }
            else if(i<=capacity){
                p3.degCoeff[i] = this->degCoeff[i];
            }
            else{
                p3.degCoeff[i] = p2.degCoeff[i];
            }
        }
        return p3;
        
    }
    Polynomial operator-(Polynomial const &p2){
            int newcap = max(this->capacity , p2.capacity);
            Polynomial p3(newcap);
            for(int i=0;i<=newcap;i++){
                if(i<=capacity && i<=p2.capacity){
                    p3.degCoeff[i]=this->degCoeff[i]-p2.degCoeff[i];
                }
                else if(i<=capacity){
                    p3.degCoeff[i] = this->degCoeff[i];
                }
                else{
                    p3.degCoeff[i] = p2.degCoeff[i];
                }
            }
            return p3;
        }
        Polynomial operator*(Polynomial const &p2){
            int newcap = this->capacity+p2.capacity;
            Polynomial p3(newcap);
            for(int i=0;i<=this->capacity;i++){
                for(int j=0;j<=p2.capacity;j++){
                    p3.degCoeff[i+j] += this->degCoeff[i]*p2.degCoeff[j];
                }
            }
            return p3;
        }

    void operator=(Polynomial const &p){
        int *newdeg = new int[p.capacity+1];
        for(int i=0;i<p.capacity;i++){
            newdeg[i] = p.degCoeff[i];
        } 
        this->degCoeff = newdeg;
        this->capacity = p.capacity;
    }
    void print(){
        for(int i=0;i<=this->capacity;i++){
            if(degCoeff[i]!=0){
                cout<<degCoeff[i]<<"x"<<i<<" ";
            }
        }
        cout<<endl;
    }
};
int main(){
    int count1,count2,choice;
    cin>>count1;
    int *degree1 = new int[count1];
    int *Coeff1 = new int[count1];
    for(int i=0;i<count1;i++){
        cin>>degree1[i];
    }
    for(int i=0;i<count1;i++){
        cin>>Coeff1[i];
    }
    Polynomial first;
    for(int i=0;i<count1;i++){
        first.setCoefficient(degree1[i],Coeff1[i]);
    }
    cin>>count2;
    int *degree2 = new int[count2];
    int *Coeff2 = new int[count2];
    for(int i=0;i<count2;i++){
        cin>>degree2[2];
    }
    for(int i=0;i<count2;i++){
        cin>>Coeff2[i];
    }
    Polynomial second;
    for(int i=0;i<count2;i++){
        second.setCoefficient(degree2[i], Coeff2[i]);
    }
    cin>>choice;
    switch(choice){
        case 1:
        {
            Polynomial result1 = first + second;
            result1.print();
            break;
        }
        case 2:
        {
            Polynomial result2 = first - second;
            result2.print();
            break;
        }
        case 3:
        {
            Polynomial result3 = first*second;
            result3.print();
            break;
        }
        case 4:
        {
            Polynomial third(first);
            if(third.degCoeff == first.degCoeff){
                cout<<"false"<<endl;
            }
            else{
                cout<<"true"<<endl;
            }
            break;
        }
        case 5:
        {
            Polynomial fourt(first);
            if(fourt.degCoeff == first.degCoeff){
                cout<<"false"<<endl;
            }
            else{
                cout<<"true"<<endl;
            }
            break;
        }
    }
    return 0;
}