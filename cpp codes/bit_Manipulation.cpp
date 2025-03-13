#include<bits/stdc++.h>
using namespace std;

string Decimal_to_binary(int num)
{
    string res="";
    int c=num;
    while(c!=1)
    {
        if(c%2==1){
            res=res+'1';
        }
        else{
            res=res+'0';
        }
        c=c/2;
    }
    res=res+'1';
    reverse(res.begin(), res.end());
    return res;

}

int main()
{
    string ans=Decimal_to_binary(13);
    
    cout<< ans << endl;

    return 0;
}