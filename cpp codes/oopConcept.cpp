#include<bits/stdc++.h>
using namespace std;
class Details{
    public:
        // data memebrs : attribute
        string name;
        int age;
        float cgpa;
        vector<string> lang;

        // default constructor
        Details()
        {
            cout<< "I am a constructor "<< endl;
        }

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
    private:
        int package;

};
int main()
{
    /*
    // cout<< "hello";
    Details detail1;  // object detail has been created
    detail1.name="Harshita Tripathi";
    detail1.age=21;
    detail1.cgpa=8.75;
    detail1.lang={"English", "Hindi"};

    Details detail2;  // object detail has been created
    detail2.name="Arya Tripathi";
    detail2.age=23;
    detail2.cgpa=9.75;
    detail2.lang={"English", "Hindi"};

    detail1.displayEachDetail();
    detail2.displayEachDetail();
    */

    //constructor get called upon creating objects
    Details det;
    return 0;
}