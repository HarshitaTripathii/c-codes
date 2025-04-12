#include<bits/stdc++.h>
using namespace std;
class BankDet{
    private:
        string accNumber;
        double balance;
    public:
        // para cosntructor
        BankDet(string an, double b)
        {
            accNumber=an;
            balance=b;
            cout<< "details set"<< endl;

        }
        // getter method
        double getBalance() const{
            return balance;
        }
       void deposit(double a)
        {
            if(a>0)
            {
                balance=balance+a;
                cout<< "total balance is "<< balance<< endl;
            }
            else {cout<< "Invalid "<< endl;}
        }
        void withdraw(double w)
        {
            if(w>balance)
            {
                cout<< "Insufficient balance "<< endl;
            }
            else{
                balance=balance-w;
                cout<< "total balance is "<< balance<< endl;
            }
        }
};
int main()
{
    BankDet bank("236975", 10000);
    bank.deposit(500);
    bank.withdraw(400);
    return 0;
}