#include "course/complex.h"
using namespace std;

int main()
{
    Complex a(2,1);
    Complex b;
    // Complex* p = new Complex();

    Complex c(2,3);
    a+=b;
    // cout << a << endl;

    cout << (a==b) << endl;
    b=-a;

    double t = 5.;
    Complex y = a+t;
    cout << a  << endl;
    // cout << (a!=b) << endl;

    // course::Complex();// 无生命的东西

    // cout << c << endl;
    
    // cout << course::conj(c) << endl;
}