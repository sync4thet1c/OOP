#include <iostream>
using namespace std;

//declaration of parent class
class Sample {
    //protected elements
protected:
    int age;
};

//declare child class
class Samplechild:public Sample {
public:
    void displayAge(int a) {
        cout<<"Age= "<<age<<endl;
    }
};

int main() {
    int ageInput;
    //declare object of child class
    Samplechild child;
    cout<<"Enter your age"<<endl;
    cin>>ageInput;

    //call child class function
    //pass ageInput as agreement
    child.displayAge(ageInput);
    return 0;
}
