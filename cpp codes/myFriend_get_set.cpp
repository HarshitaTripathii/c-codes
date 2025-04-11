#include<bits/stdc++.h>
using namespace std;
class Chai{
    private:
        string teaName;
        int num;
    public:
        Chai(string n, int b): teaName(n), num(b){};    // another way of creating parametric constructor

        friend bool comparely(const Chai&c1, const Chai&c2);

        Chai(string n): Chai(n, 1){};

        string getTeaName()
        {
            return teaName;
        }
        int getNum()
        {
            return num;
        }
        void setTeaName(string n)
        {
            //logic
            teaName=n;
        }
        void setNum(int numb)
        {
            //logic
            num=numb;
        }
        void displayDet()
        {
            cout<< "tea Name is "<< teaName<<"of number " << num<< endl;
        }
};
bool comparely(const Chai&c1, const Chai&c2)
{
    return c1.num>c2.num;
}

int main(){

    Chai chai1("Masala", 4);
    Chai chai2("Lemon", 8);

    /*
    // Chai chai3("Ginger tea");  // will raise error, until deligating  constructor not present, see below, thats correct
    Chai chai3("Ginger tea",4);
    // chai3.setNum(3); // deligating  constructor has been constructed
    */


    if(comparely(chai1, chai2))
    {
        cout<< "c1 has more num"<< endl;

    }
    else
    {
        cout<< "c2 has more num"<< endl;
    }
    chai3.displayDet();

   /*
    // error in code below is : this member is inaccessible,
    //  hence set and get will work as those members were declared in private 
    bool v=(chai1.num>chai2.num)? true:false;
    cout<< v<< endl;
    */
    return 0;

}