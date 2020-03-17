#include "string.h"
#include <string.h>
#include <iostream>

String::String(const char* cstr=0){
    if(cstr){
        m_data= new char[strlen(cstr)+1];
        strcpy(m_data, cstr);

    }else{//未指定初值
        m_data = new char[1];
        *m_data = '\0';
    }
}

inline String::String(const String& str)
{
    m_data = new char[strlen(str.m_data)+1];
    strcpy(m_data, str.m_data);
}

inline String& String::operator=(const String& str)
{
    if(this == &str) return *this; //自我检测，可能会自我赋值
    delete[] m_data;

    m_data = new char[strlen(str.m_data)+1];
    strcpy(m_data, str.m_data);
    return *this;
}

inline String::~String()
{
    delete[] m_data;
}

std::ostream& operator << (std::ostream os, const String& str){
    os << str.get_c_str();
    return os;
}

