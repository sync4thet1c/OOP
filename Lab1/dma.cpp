#include <iostream>
using namespace std;
int main() {
    int *point;
    float *dot;
    //dynamically allocate memory
    point = new int;
    dot = new float;
    //Assigning the memory
    delete point;
    delete dot;
    return 0;
}
