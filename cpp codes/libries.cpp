#include<bits/stdc++.h>
using namespace std;
int main()
{
    // cout << "hello harshita";

    /*
    // PAIR 
    pair<int , int >p1={1,5};
    pair<int, pair<int, int>>p2={2,{6,7}};

    cout << p1.first << endl;
    cout << p2.second.second << endl;

    // just like we declare the datatype of array by int a[]={2,3}

    pair<int, int> ap[3]={{2,4},{3,9},{4,16}};
    pair<int, int> ap1[]={{2,4},{3,9},{4,16}};  // size or length not declared

    cout << ap[1].second << endl;
    cout << ap1[1].first << endl;
    */

   // VECTORS
   vector<int> v2;    // this creates empty container :  { }
   v2.push_back(1);
   v2.emplace_back(2);

   // difeerence b/w emplace and push is in SYNTAX while pushing a pair.
   vector<pair<int,int>>vec;
   vec.push_back({3,9});
   vec.emplace_back(1,2);

   // container having 100, 5 times as elements
   vector<int> v1(5,100);


/*
// set iterator to either beginning or next to end, use following functions

   cout << v1[2] << endl;

   vector<int> :: iterator it= v1.begin();
   cout << *it << endl;
   it++;
   cout << *it << endl;
   cout << v1.size()<< endl;
   */


/*
// usin loop, we can access vector elements.

   // method 1 :
   for (int i=0;i<v1.size();i++)
   {
    // cout << v1[i]<< endl;
   }

//    method 2 :  auto instead of vector <int> :: iterator 
for (auto it=v1.begin(); it!= v1.end();it++)
{
    // cout << *(it) << endl;
}

// method 3 : using forEach Loop
 for(auto it : v1){
    // cout << it<< endl;
 }
*/

// erase function 

/*
vector <int> v;
int e;
if(v.size()!=5)
{
  for (int i=0;i<5;i++)
{
    cout << "enter element "<< i+1<< endl;
    cin >>e;
    v.push_back(e);
}
}
for(auto it1 : v)
{
   cout << "vector elements are "<< endl;
   cout << it1 << " ";
}
v.erase(v.begin()+1);   // 2nd element : index = 1
for(auto it1 : v)
{
   cout << it1 << " ";
}
*/

// above shows how to user input vector values but just like arrays, we can do this.

vector<int> v={12,13,14,15,16};
for(auto it1 : v)
{
   cout << it1 << " ";
}
v.erase(v.begin()+2);   //3rd element : index = 2
cout << endl << "after erasing"<< endl;
for(auto it1 : v)
{
   cout << it1 << " ";
}
v.erase(v.begin()+1,v.begin()+3);
cout << endl << "after erasing"<< endl;
for(auto it1 : v)
{
   cout << it1 << " ";
}








   

}