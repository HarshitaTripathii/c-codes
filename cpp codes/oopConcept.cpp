#include<bits/stdc++.h>
using namespace std;
class details{
    // data memebrs : attribute
    string name;
    int age;
    float cgpa;
    vector<string> lang;

    // member function : methods
    void displayEachDetail()
    {
        cout<< "Name is "<< name<< " of age "<<age<< " and cg is "<< cgpa<< endl;
        cout << "Languages Known is ";
        for(string l : lang)
        {
            cout << l<< " ";
        }
        cout << endl;

    }

}
int main()
{
    cout<< "hello";
    return 0;
}