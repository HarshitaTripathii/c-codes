#include<iostream>

using namespace std;

void p1(int n)
{
    for (int i=0; i<n;i++)
    {
        for (int j=0; j<=n;j++)
        {
            cout << "* ";
        }
        cout << endl;
    }

}
void numberCrown(int n) {
    for (int i=1;i<=n;i++)
    {
        int p=0;
        for (int j=1;j<=2*n;j++)
        {
             if ((i+j)<=2*i)
             {
                 cout << j ;
                 p=p+1;
             }
              else {
                 cout << " ";
             }
             if((i+j)>=(2*n)+1){
                 cout << p ;
                 p=p-1;
             }
             else {
                 cout << " ";
             }
             
        }
        cout << endl;
    }
}
void symmetry(int n) {
    for (int i=1;i<=n; i++)
    {
        for (int j=1;j<=2*n;j++)
        {
            if(j>=(n+2-i) && j<=(n+i-1))
            {
                cout << " ";
            }
            else {
                cout << "*";
            }
        }
        cout << endl;
    }
    for (int i=1;i<=n; i++)
    {
        for (int j=1;j<=2*n;j++)
        {
            if(j+i>2*i && j+i<2*n+1)
            {
                cout << " ";
            }
            else {
                cout << "*";
            }
        }
        cout << endl;
    }
}
void symmetry1(int n) {
    for (int i=1;i<=2*n-1;i++)
    {
        for(int j=1;j<=2*n;j++)
        {
            if(i<=n)
            {
                if((i+j)>=2*i+1 && (i+j)<=2*n)
                {
                    cout << " ";
                }
                else {
                    cout << "*";
                }
            }
            else{
                if((i+j) >= 2*n+1 && (i+j)<=2*i)
                {
                    cout << " ";
                }
                else{
                    cout << "*";
                }
            }

        }
        cout << endl;
    }
}
void getNumberPattern(int n) {
    for(int i=1;i<2*n;i++)
    {
        for(int j=1;j<2*n;j++)
        {
            int top=i-1;
            int down =(2*n-1)-i;
            int left=j-1;
            int right=(2*n-1)-j;

            cout << n-min(min(top,down), min(left,right));
        }
        cout << endl;
    }

}
void getStarPattern(int n) {
    
    for (int i=1;i<=2*n-1;i++)
    {
        for(int j=1;j<=n;j++)
        {
          int top=i-1;
          int down=n-i;
          int left=n-j;
          int right=j-1;
          int dis=min(min(top,down),min(left , right)) ;
          if(dis==0)
          {
              cout << "*";
          }
          else{
              cout << " ";
          }
        }
        cout << endl;
    }
}
void nLetterTriangle(int n) {
    for(int i=n;i>=1;i--)
    {
        int count=65;
        for(int j=i;j>=1;j--)
        {
           cout << char(count)<< " ";
           count++;
        }
        cout << endl;
    }
}


int main()
{
//  p1(4);
// numberCrown(6);
// symmetry(3); 
// symmetry1(6);
// getNumberPattern(4);
// getStarPattern(4);
nLetterTriangle(3);
 return 0;
}