#include<bits/stdc++.h>
using namespace std;
class Chai{
    private:
        string teaName;
        int num;
    public:
        Chai(string n, int b): teaName(n), num(b){};    // another way of creating parametric constructor
        friend bool comparely(const Chai&c1, const Chai&c2);
        void displayDet()
        {
            cout<< "tea Name is "<< teaName<< endl;
        }
};
bool comparely(const Chai&c1, const Chai&c2)
{
    return c1.num>c2.num;
}

int main(){

    Chai chai1("Masala", 4);
    Chai chai2("Lemon", 8);
    if(comparely(chai1, chai2))
    {
        cout<< "c1 has more num"<< endl;

    }
    else
    {
        cout<< "c2 has more num"<< endl;
    }
    return 0;

}