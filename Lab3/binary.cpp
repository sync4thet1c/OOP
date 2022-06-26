#include <iostream>
using namespace std;
class Calculation {
    int num;
public:
    void input() {
        num=20;
    }
    Calculation operator + (Calculation &obj) {
        Calculation A;
        A.num = num +obj.num;
        return(A);
    }

    Calculation operator - (Calculation &obj) {
        Calculation A;
        A.num = num - obj.num;
        return(A);
    }
    Calculation operator * (Calculation &obj) {
        Calculation A;
        A.num = num * obj.num;
        return(A);
    }

    Calculation operator / (Calculation &obj) {
        Calculation A;
        A.num = num / obj.num;
        return(A);
    }

    void print() {
        cout<<num;
    }
};

int main() {
    Calculation x1, y1, res;
    x1.input();
    y1.input();
    res = x1+y1;
    cout<<"Addition: ";
    res.print();
    res = x1-y1;
    cout<<"\n\nSubtraction: ";
    res.print();
    res = x1*y1;
    cout<<"\n\nMultiplication: ";
    res.print();
    res = x1/y1;
    cout<<"\n\nDivision: ";
    res.print();
    return 0;

}
