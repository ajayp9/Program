#include<bits/stdc++.h>
using namespace std;
/*class Student {
    public :

    int rollNumber;
    int age;

};


int main() {
    Student s1;

    Student const s2 = s1;

    s1.rollNumber = 101;
    s1.age = 20;

    cout << s2.rollNumber << " " << s2.age;
}*/
/*class Student {
    int rollNumber;

    public :

    int age;

    Student(int r) {
        rollNumber = r;
    }

    int getRollNumber() {
        return rollNumber;
    }

};


int main() {
    Student s1(101);
    s1.age = 20;

    Student const s2 = s1;
    cout << s2.getRollNumber();
}*/
class Student {
    public :

    int rollNumber;

    static int getRollNumber() {
        return rollNumber;
    }
};


int main() {
    Student s;
    s.rollNumber = 101;
    cout << s.getRollNumber() << endl;
}