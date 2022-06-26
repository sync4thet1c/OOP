#include <iostream>
using namespace std;

template<class T>
class Number {
private:
    T num;
public:
    Number(T const& n):num(n) {}
    T getNum() {
        return num;
    }
};

int main() {
    Number<int>intNumber(7);
    Number<double>DoubleNumber(7.7);
    cout<<"intNumber = "<<intNumber getNum()<<endl;
    cout<<"doubleNumber= "<<DoubleNumbergetNum()<<endl;
    return 0;
}
