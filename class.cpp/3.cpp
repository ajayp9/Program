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
    void setAge(int a, int password){
        if(password!=123){
            return;
        }
        age = a;
    }
};
int main(){
    student s1;
    student*s2 = new student;
    s1.setAge(24, 123);
    s2-> setAge(20, 123);

    s1.display();
    s2-> display();
}