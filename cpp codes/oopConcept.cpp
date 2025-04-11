#include<bits/stdc++.h>
using namespace std;
class Details{
    public:
        // data memebrs : attribute
        // string* name=new string;
        string* name;

        int age;
        float cgpa;
        vector<string> lang;

/*
        // default constructor
        Details()
        {
            name="Unknown";
            name=nullptr;   // in case of string *name
            age=22;
            cgpa=9;
            lang={"English", "Hindi"};
            cout<< "I am a constructor "<< endl;
        }
*/
        // parameter constructor
        Details(string n, int a,float c,vector<string> l)
        {
            name=new string(n);
            age=a;
            cgpa=c;
            lang=l;
            cout<< "Parameteric values have been set "<< endl;
        }

        //copy constructor 
        Details(Details& other)
        {
            name=new string(*other.name);
            age=other.age;
            cgpa=other.cgpa;
            lang=other.lang;
            cout<< "copy constructor run successfully"<< endl;

        }

        
        // Destructor
        ~Details() {
            delete name; // Free allocated memory
            cout << "Destructor called, cleaning up resources" << endl;
        }

        // member function : methods
        void displayEachDetail()
        {
        cout<< "Name is "<< *name<< " of age "<<age<< " and cg is "<< cgpa<< endl;
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


    /*
    //constructor get called upon creating objects
    Details det("Harshit", 20, 7.99,{"Eng", "Hin"});
    // cout<<det.name;
    det.displayEachDetail();
    */

    // copy constructor : creating copy of an object
    Details det("Harshit", 20, 7.99,{"Eng", "Hin"});
    det.displayEachDetail();

    Details detail3=det;   // This will call the copy constructor
    detail3.displayEachDetail();


    // no modification in any class var using detail3 , but possible through det
    // *det.name="Yashi";
    // det.age=30;

    // detail3.age=40;
    // detail3.displayEachDetail();

   


    
    return 0;
}