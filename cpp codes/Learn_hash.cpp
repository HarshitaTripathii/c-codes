#include<bits/stdc++.h>
using namespace std;



int main()
{
    /*
    int n;
    cout << "enter num of element in array" << endl;
    cin >> n;
    int a[n];
    cout << "enter  elements 1 by 1" << endl;
    for(int i=0;i<n;i++)
    {
        cin >> a[i];
    }
    int maxval=a[0];
    for( int i =1;i<n;i++)
    {
        maxval=max(maxval, a[i]);
    }
    cout << "max val in array is " << maxval<< endl;

    // pre compute

    // int hash[maxval]={0};
    // int hash[13]={0};
    int hash[maxval+1]={0};
    for(int i=0;i<n;i++)
    {
        hash[a[i]]=hash[a[i]]+1;
    }
    cout << "your hash table is ready" << endl;

    // how many numbers to be searched : q
    // num to be searched : num
    int q;
    cout << "how many numbers to be searched : "<< endl;
    cin>> q;
    while(q--){
        int num;
        cout << "enter number to be searched : "<< endl;
        cin >> num;
        if(num>=0 && num<=maxval){
            cout <<"number " << num << "appeared " << hash[num] << "times"<<  endl;
        }
        else{ 
            cout<<"this number " << num << "does not exist in hash"<< endl;
        }
        
         
    }
    */

   // STRING HASHING
   // case 1 : only small letters : [97,122]  hash[26]  access : hash[c-'a']
   // case 2 : small + capital + any other character (eg. @, $ etc): hash[256] as total ascii no. is 256 :  access : hash[c]
   // case 3 : only capital letter : hash[26] : access : hash[c-'A']
string s;
cout << "enter string" << endl;
cin>> s;
// pre compute
// int hash[26]={0};
int hash[256]={0};
for(int i=0;i<s.size();i++)
{
    // hash[s[i]-'a']++;
    hash[s[i]]++;
}

int q;
cout<< "enter no. of characters to be searched"<< endl;
cin>> q;
while(q--)
{
    char c;
    cout << "enter char to count"<< endl;
    cin >> c;
    // cout <<c << "occured"<< hash[c-'a']<< "tines"<<endl;
    cout <<c << "occured"<< hash[c]<< "tines"<<endl;

}

    return 0;
}

