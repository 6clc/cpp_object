#ifndef __COMPLEX__
#define __COMPLEX__
#include<iostream>
using namespace std;

class Complex
{
    public:
    Complex(double r=0, double i=0)
    : re(r), im(i)
    {}

    // 不可同时存在冲突的
    // Complex()
    // : re(0), im(0)
    // {}

    double real() const {return re;}
    double imag() const {return im;}
    Complex& operator += (const Complex&);

    private:
    double re;
    double im;

    friend Complex& __doapl(Complex*, const Complex&);
};

//全域函数
inline double imag(const Complex& x){return x.imag();}
inline double real(const Complex& x){return x.real();}

// os 一直要改变，所以传入的时候，不能用引用传递进去
inline ostream& operator << (ostream& os, const Complex& x)
{
    return os << '(' << x.real() << ',' << x.imag() << ')';
}

// 以下为什么不用引用传递，
inline Complex operator + (const Complex& x, const Complex& y)
{
    return Complex(real(x) + real(y), imag(x)+imag(y));
}

inline Complex operator + (const Complex& x, double y)
{
    return Complex(real(x) + y, imag(y));
}

inline Complex operator + (double x, const Complex& y)
{
    return Complex(x + real(y), imag(y));
}

// 这里用引用返回更好。因为不是typename()类型
inline Complex operator + (const Complex& x){
    return x;
}

inline Complex operator - (const Complex& x)
{
    return Complex(-real(x), -imag(x));
}

inline bool operator == (const Complex& x, const Complex& y)
{
    return real(x) == real(y) && imag(x) == imag(y);
}

inline bool operator == (const Complex& x, double y){
    return real(x) == y && imag(x) == 0;
}

inline bool operator == (double x, const Complex& y){
    return real(y) == x && imag(y) == 0;
}

inline bool operator != (const Complex& x, const Complex& y){
    return real(x) != real(y) || imag(x) != imag(y);
}

inline bool operator != (const Complex& x, double y){
    return real(x) != y || imag(x) != 0;
}

inline bool operator != (double x, const Complex& y){
    return real(y) != x || imag(y) !=0;
}

inline Complex conj(const Complex& x)
{
    return Complex(real(x), -imag(x));
}

# endif
