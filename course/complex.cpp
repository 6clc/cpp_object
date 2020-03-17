#include "complex.h"

inline Complex&  __doapl(Complex* ths, const Complex& r)
{//assignmentplus,赋值加法
    ths->re += r.re;
    ths->im += r.im;
    return *ths;
}

Complex& Complex:: operator+=(const Complex& x)
{
    return __doapl(this, x);
    // 也可以使用同类有元的办法？
}
// += 的隐藏形式
// inline Complex& Complex:: operator+=(this, const Complex& x)
// {
//     return __doapl(this, x);
//     // 也可以使用同类有元的办法？
// }
