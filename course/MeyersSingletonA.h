class A{
    public:
    static A& getInstance();
    void setup(){

    }

    private:
    A(){};
};

A& A::getInstance()
{//只有调用这个函数才有用
    static A a;
    return a;
}

int main(){
    A::getInstance().setup();
    return 0;
}