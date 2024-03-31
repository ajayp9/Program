#include<bits/stdc++.h>
using namespace std;
class student{
    public:
    int age;
    int rollnumber;

};
int main(){
    student s1;
    student s2;
    student *s3=new student;//dynamically
    s1.age = 24;
    s1.rollnumber = 101;
    s2.age = 25;
    s2.rollnumber = 102;

   // (*s3).age = 19;
    s3->age = 19;
    (*s3).rollnumber = 109;

    cout<<s1.age<<" "<<s1.rollnumber<<endl;
    cout<<s2.age<<" "<<s2.rollnumber<<endl;


    cout<<(*s3).age<<" "<<(*s3).rollnumber<<endl;

}