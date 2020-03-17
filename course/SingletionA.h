class A{
    public:

    static A& getInstance();
    void setup(){

    }

    private:
    A(){};
    static A a;
};

A& A::getInstance()
{
    return a;
}

int main(){
    A::getInstance().setup();
    return 0;
}