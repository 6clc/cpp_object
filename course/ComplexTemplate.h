#ifndef __COMPLEXTMEPLATE__
#define __COMPLExTMEPLATE__


template<typename T>
class Complex
{
    public:
    Complex(T r=0, T i=0)
    :re(r), im(i)
    {}

    T real() const{return r;}
    T imag() const{return i;}
};
#endif