#include<bits/stdc++.h>
using namespace std;
/*class Student {
    int rollNumber;
};

int main() {
    Student s;
    cout << s.rollNumber;
}*/
class Shape{
    public : 
    int height;
    int width;
};

int main() {
    Shape *s = new Shape();
    s -> height = 1;
    cout << s -> height;
}