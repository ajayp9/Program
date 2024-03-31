#include<bits/stdc++.h>
using namespace std;
/*class Student {
    public :

    const int rollNumber;
    int age;

};


int main() {
    Student s1;
    s1.rollNumber = 101;
    s1.age = 20;

    cout << s1.rollNumber << " " << s1.age;

}*/
/*class Student {
    public :

    const int rollNumber;
    int age;

    Student(int r, int a) : rollNumber(r), age(a) {
    }
};


int main() {
    Student s1(100, 23);
    cout << s1.rollNumber << " " << s1.age;
}*/
class Student {
    public :

    const int rollNumber;
    int age;

    int &x;

    Student(int r, int a) : rollNumber(r), age(a) {
    }
};


int main() {
    Student s1(100, 23);
    s1.x = age;
    cout << s1.rollNumber << " " << s1.age << " " << s1.x;
}