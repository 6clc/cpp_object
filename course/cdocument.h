#ifndef __CDOCUMENT__
#define __CDOCUMENT__
class CDocument
{
    public:
    void onFileOpen()
    {
        cout << "dialog ..." << endl;
        cout << "check file status ..." << endl;
        cout << "open file ..."<<endl;
        Serialize();
        cout << "close file ..." << endl;
        cout << "update all views ..." <<endl;
    }
    virtual void Serialize(){};
};
#endif