#include <iostream>
using namespace std;

int main() {
    try {
        int age = 15;
        if(age>=18) {
            cout<<"Access Granted! - You are old enough\n";
        } else {
            throw(age);
        }
    }
        catch(int myNum) {
            cout<<"Acess Denied! - You must be atleast 18 years old\n";
            cout<<"Age is: "<<myNum;
        }
    return 0;
}
