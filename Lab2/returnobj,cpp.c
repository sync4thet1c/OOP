#include <iostream>
using namespace std;

class Student {
public:
    double marks1, marks2;
};

Student createStudent() {
    Student student;
    student.marks1 = 96.5;
    student.marks2 = 75.0;
    cout<<"Marks1 = "<<student.marks1<<endl;
    cout<<"Marks2 = "<<student.marks2<<endl;
    return student;
}

int main() {
    Student student1;
    student1= createStudent();
    return 0;
}
