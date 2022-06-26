//A program to illustrate the concept of objects as function arguments

#include <iostream>
using namespace std;

class Student {
public:
    double marks;
    student(double m) {
            marks = m;
    }

    void calculateAverage(student s1, student s2) {
        double Average  = (s1.marks  + s2.marks)/2;
        cout<<"Average Marks = "<<average<<endl;
    }
};

int main() {
    Student student1(88.0);
    Student student2(56.0);
    calculateAverage(student1, student2);
    return 0;
}
