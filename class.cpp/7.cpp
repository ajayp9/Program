#include<iostream>

using namespace std;

class Person {

    // Complete the class
    string name;

   int age;

   public:

  void setName(string x, int y){

      name=x;

      age=y;

  }

   string getName1(){

       return name;

   }

   int getName2(){

   return age;

   }

};

int main() {

    //Write your code herePerson p;
    
    Person p;
  string  a;

  int  b;

  cin>>a>>b;

   p.setName(a,b);

   cout<<"The name of the person is "<<p.getName1()<<" "<<"and the age is "<<" "<<p.getName2()<<"."<<endl;

   
    

    return 0;
}