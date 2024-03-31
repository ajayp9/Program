#include<bits/stdc++.h>
using namespace std;
class student{
    public:
    int rollnumber;
    private:
    int age;

    public:
    void display(){
        cout<<age<<" "<<rollnumber<<endl;
    }
    int getAge(){
        return age;
    }
};
int main(){
    student s1;
    student s2;
    student*s3=new student;

    s1.rollnumber = 101;
    cout<<"s1 age:"<<s1.getAge()<<endl;
    cout<<"s1 rollnumber:"<<s1.rollnumber<<endl;
    s1.display();
    s2.display();
    (*s3).rollnumber = 104;
    (*s3).display();
    cout<<"s3 age:"<<s3->getAge()<<endl;
    s3->rollnumber = 104;
    s3->display();
}