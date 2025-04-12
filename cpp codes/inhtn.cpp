#include<bits/stdc++.h>
using namespace std;

// Tea is a Base/main/parent class
class Tea{
    protected:
        string teaName;
        int serve;
    // constructor
    Tea(string t, int s): teaName(t), serve(s){
        cout<< "constructor has been called" << endl;
    }

    virtual void brew() const{
        cout<< " brewing"<< teaName<< endl;

    }
    virtual void make() const{
        cout<< " serving"<< serve<< endl;

    }
    virtual ~Tea()
    {
        cout<< "destructor has been called"<< endl;
    }
        
};

class GreenTea: public Tea
{
    public:
        GreenTea(int serve): Tea("Green Tea", serve){
            cout<< "green tea made"<< endl;
        }
        void brew() const override{
            cout<< " brewing"<< teaName<< endl;;
        }
        ~GreenTea()
        {
            cout<< "destructor has been called"<< endl;
        }
};

class MasalaTea: public Tea
{
    public:
        MasalaTea(int serve): Tea("Masala Tea", serve){
            cout<< "Masala tea made"<< endl;
        }
        void brew() const override final {
            cout<< " brewing"<< teaName<< endl;;
        }
        ~MasalaTea()
        {
            cout<< "destructor has been called"<< endl;
        }
};

class ExtraMasalaTea: public MasalaTeaTea
{
    public:
        ExtraMasalaTea(int serve): MasalaTea("Masala Tea", serve){
            cout<< "Masala tea made"<< endl;
        }
        void brew() const override  {
            cout<< " brewing and using it in Extra masala"<< teaName<< endl;;
        }
        ~MasalaTea()
        {
            cout<< "destructor has been called"<< endl;
        }
};