#include<iostream>
using namespace std;

int main()
{
    /*
    cout<<"hello harshita"  << "\n";
    cout<<"hello harshita"  << endl << "what you doing" <<  endl;
    cout<< "good evening" <<  endl << "new line";
    */
   /*
   int x,y;
   cout << "enter value of x  and y";
   cin >> x >> y;
   cout << " the value of x and y are " << x << " " << y << " " << "respectively";
   */


/*
  int x=10;
  float y=2.3;
  float z=3;
  cout <<( x, y) <<  std::  endl;

//  here float z=3, in cpp, on printing z, result will be same as stored i.e. 3
//  but in c , i,plicit type casting will be done and the output will be 3.000..
  cout << "x =" << x << std :: endl << "z=" << z<< std :: endl ;
  */


/*
 string s,s1,s2;
 cout << "enter strings";
 cin>> s >> s1 >> s2;    // here writing 3 words consodering 1 line, (ofc by giving spaces b/w words) will be treated as 3 s,s1,s2, 
 cout << s << " " << s1 ;
 cout << s << s1 << s2;
 */


// insted of talking 2 inputs and concatinating them using "", use getline( cin, input_string)
/*
string str;
getline(cin, str);
cout<< "the string is " << str;    // OUTPUT : the string is heya harshita, how you doing ?
*/
int age;
cin >> age;
if(age>=18){
    cout << "eligible";
}
else{
    cout << "not eligible";
}
    return 0;
}