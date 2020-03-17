#ifndef __MYSTRING__
#define __MYSTRING__

class String
{
    public:
    String(const char* cstr = 0);
    String(const String& str); //拷贝构造
    String& operator=(const String& str);//拷贝赋值
    ~String();//析构函数
    char* get_c_str() const {return m_data;}

    private:
    char* m_data;

};

# endif