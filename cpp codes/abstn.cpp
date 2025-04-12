#include<bits/stdc++.h>
using namespace std;
class Tea{
    public:
        virtual void function1()=0; 
        virtual void function2()=0;
        virtual void function3()=0;
        // ADDING ATLEAST 1 VIRTUAL FUNCTION, MAKES THE CLASS ABSTRACT

        void makeTea()
        {
            function1();
            function2();
            function3();
        }
};
// DERIVED CLASS
class GreenTea : public Tea
{
    public:
        void function1() override{
            cout<<"func 1 done"<< endl;
        }
        void function2() override{
            cout<<"func 2 done"<< endl;
        }
        void function3() override{
            cout<<"func 3 done"<< endl;
        }
};
int main()
{
    GreenTea greenT;
    greenT.makeTea();


    return 0;
}