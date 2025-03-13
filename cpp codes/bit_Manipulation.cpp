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

int  Binary_to_decimal(int num)
{
    int ans=0;
    int p=1;
    string c=to_string(num);
    reverse(c.begin(),c.end());
    for(int i=0;i<c.size();i++)
    {
        if(c[i]=='1')
        {
            ans=ans+p;
        }
        p=p*2;
    }
    return ans;
    
}
int main()
{
    string ans1=Decimal_to_binary(13);
    int ans2=Binary_to_decimal(1101);
    
    cout<< ans1 << endl;
    cout<< ans2<< endl;

    return 0;
}