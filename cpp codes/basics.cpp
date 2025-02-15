#include <bits/stdc++.h>
using namespace std;

void greet(string name)
{
  cout << "hello " << name;
}

vector<long long> factorialNumbers(long long n)
{
  int num = 1;
  vector<long long> vec;

  //   int fact=factorial(num);
  long long fact = 1;
  while (fact <= n)
  {
    //   vec.push_back(fact);
    //   num++;
    //   fact=factorial(num);
    vec.push_back(fact);
    num++;
    fact = fact * num;
  }
  return vec;
}

int conAdd(int num)
{
  cout << num << endl;
  num = num + 5;
  cout << num << endl;
  num = num + 5;
  cout << num << endl;
}
void changesVal(string s)
{
  cout << s << endl;
  s[0] = 't';
  cout << s << endl;
}
void changesRefer(string &s)
{
  cout << s << endl;
  s[0] = 't';
  cout << s << endl;
}

void changeArray(int a[])
{
  a[0] = a[0] + 100;
  cout << "outside main " << a[0] << endl;
}

int searchRecur(int l, int h, int x, int arr[])
{
  if (l > h)
  {
    return -1;
  }
  int mid = (l + h) / 2;
  if (arr[mid] == x)
  {
    return mid;
  }
  else if (arr[mid] > x)
  {
    return searchRecur(l, mid - 1, x, arr);
  }
  else
  {
    return searchRecur(mid + 1, h, x, arr);
  }
}

int lowerBound(int l, int h, vector<int> arr, int x)
{

  int ans = arr.size();
  while (l <= h)
  {
    int mid = (l + h) / 2;
    if (arr[mid] >= x)
    {
      ans = mid;
      h = mid - 1;
    }
    else if (arr[mid] < x)
    {
      l = mid + 1;
    }
  }
  return ans;
}

int UpperBound(int l, int h, vector<int> arr, int x)
{

  int ans = arr.size();
  while (l <= h)
  {
    int mid = (l + h) / 2;
    if (arr[mid] > x)
    {
      ans = mid;
      h = mid - 1;
    }
    else
    {
      l = mid + 1;
    }
  }
  return ans;
}
void moveZeroes(vector<int> &nums)
{
  int z = -1;
  for (int i = 0; i < nums.size(); i++)
  {
    if (nums[i] == 0)
    {
      z = i;
      break;
    }
  }
  if (z == -1)
  {
    return;
  }
  for (int i = z + 1; i < nums.size(); i++)
  {
    if (nums[i] != 0)
    {
      swap(nums[z], nums[i]);
      z++;
    }
  }
  return;
}

vector<int> prefixSum(vector<int> &v)
{
  vector<int> pref(v.size());
  pref[0] = v[0];
  for (int i = 1; i < v.size(); i++)
  {
    pref[i] = pref[i - 1] + v[i];
  }
  return pref;
}

int subarray(vector<int> &v)
{
  map<int, vector<pair<int, int>>> mp;
  // int s = v.size();
  int c = 0;
  /*
  vector<int> prev(s);

  for (int i = 0; i < v.size(); i++)
  {
    
    prev[i] = v[i];
    for (int j = i; j < v.size() - 1; j++)
    {
      prev[j + 1] = prev[j] + v[j + 1];
      mp[prev[j]].push_back({i, j});
    }
    s--;
  }
  */

 for(int i=0;i<v.size();i++)
 {
  int sum=0;
  for(int j=i;j<v.size();j++)
  {
    sum=sum+v[j];
    mp[sum].push_back({i,j});
  }
 }
  for (auto it : mp)
  {
    vector<pair<int, int>> vm = it.second;
    if (vm.size() >= 2)
    {
      for (int i = 0; i < vm.size(); i++)
      {
        for (int j = i + 1; j < vm.size(); j++)
        {
          int l1, l2, r1, r2;
          l1 = vm[i].first;
          r1 = vm[i].second;
          l2 = vm[j].first;
          r2 = vm[j].second;
          if (r1 < l2 || r2 < l1)
          {
            c++;
          }
        }
      }
    }
  }
  return c;
}
vector<int> suffixSum(vector<int> &v)
{
  vector<int> suf(v.size());
  suf[v.size() - 1] = v[v.size() - 1];
  for (int i = v.size() - 2; i >= 0; i--)
  {
    suf[i] = suf[i + 1] + v[i];
  }
  return suf;
}
void equalSum(vector<int> &v3)
{

  for (int i = 0; i < v3.size() - 1; i++)
  {
    int s1 = 0, s2 = 0;
    for (int j = 0; j <= i; j++)
    {
      s1 = s1 + v3[j];
    }
    for (int j = i + 1; j < v3.size(); j++)
    {
      s2 = s2 + v3[j];
    }

    if (s1 == s2)
    {
      cout << i << endl;
    }
  }
}

void eqSumP(vector<int> &v)
{
  int c = 0;
  int sumV = accumulate(v.begin(), v.end(), 0);
  vector<int> pre(v.size());
  pre[0] = v[0];
  for (int i = 1; i < v.size(); i++)
  {
    pre[i] = v[i] + pre[i - 1];
    if ((sumV - pre[i - 1]) == pre[i - 1])
    {
      // cout << i-1<< endl;
      c++;
    }
  }
  cout << "total pairs are " << c << endl;
}

int main()
{
  // vector<int> v={1,-1,2,-2};
  vector<int> v={1,2,3};
  // vector<int> b = {2, 3, 8, 10, 2};
  // vector<int> v4 = {3, 4, -2, 5, 8, 20, -10, 8};
  // eqSumP(v4);
  // equalSum(v4);
  int a=subarray(v);
  cout << a<< endl;
  /*
  vector<int> vpre;
  vpre=prefixSum(b);
  for(int i=0;i<vpre.size();i++)
  {
    cout<< vpre[i]<< " ";
  }
  */

  /*

   vector<int> vsuf;
   vsuf=suffixSum(b);
   for(int i=0;i<vsuf.size();i++)
   {
     cout<< vsuf[i]<< " ";
   }

   */

  // vector<int> b = {0, 2, 0, 3, 0, 8, 8, 0, 10, 11};
  // moveZeroes(b);
  // for(auto it : b)
  // {
  //    cout << it<< " ";
  // }
  // int resL = lowerBound(0, 9, b, 3);
  // cout << resL << endl;
  // int resU = UpperBound(0, 9, b, 3);
  // cout << resU << endl;
  // int a[6] = {10, 20, 3, 45, 6, 7};
  // int x = searchRecur(0, 5, 8, a);
  // cout<< x<< endl;

  //   vector <long long> ans=factorialNumbers(89);
  //  for(auto it : ans)
  //  {
  //   cout << it<<  endl;
  //  }
  // int arr[4] = {10, 20, 30, 40};
  // cout << "Without  main " << arr[0] << endl;

  // changeArray(arr);
  // cout << "Inside main " << arr[0] << endl;

  /*
  // greet("Harshita");

  int number=5;
  conAdd(number);  // PASS BY VALUE
  cout << number<< endl;
  string str="harshita";
  // CALL BY VALUE   (making a copy of variable it is passed)
  changesVal(str);
  cout << str << endl;

  //   CALL BY REFERENCE
  changesRefer(str);
  cout << str << endl;
  */

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

  /*
  int age;
  cin >> age;
  if(age>=18){
      cout << "eligible";
  }
  else{
      cout << "not eligible";
  }
  */

  // chess

  //  string s;
  //     cin>> s;
  //     if(s[0]%2==0 && (s[1]%2)==0 || s[0]%2 !=0 && (s[1]%2) !=0 )
  //     {
  //         cout << "Black"<< endl;
  //     }
  //     else{
  //         cout<< "White"<< endl;
  //     }

  /*
  //SWTICH CASE
  int num;
  cout << "enter number" << endl;
  cin>> num;
  switch(num)
  {
    case 1:
       cout << "hello 1";
       break;

    case 2:
        cout << "hello 2";
        break;


    case 3:
        cout << "hello 3";
        break;

    default:
         cout << "enter valid num";
         break;
    cout << "check inside siwtch";
  }
  cout << "  check outside switch";
  */

  /*
  char ch;
  cin >> ch;
  cout << "value of chracter is " << ch;
  */

  /*
  // 1D ARRAY
  int a[3];
  cin >> a[0] >> a[1] >> a[2];
   a[2]=a[2]+10;
   cout << a[2];
   */

  /*
  // 2D ARRAY
  int b[2][3];
  cin >> b[1][1];
  cout << "b[0][0] " << b[0][0] << " b[1][1] "  << b[1][1];
  */

  /*
  // STRINGS
  string s;
  s="Harshita";
  int len=s.size();
  cout << len << endl << s[1] << endl << s[len-1] << endl << sizeof(s);
  */

  /*
  // WHILE LOOP
  int i=0;
  while(i<=5)
  {
    cout << i << endl;
    i=i+1;
  }

  // DO WHILE LOOP

  int j=0;
  do{
    cout << j << endl;
    j=j+1;
  } while (j<=4);
  cout << j << endl;
  */

  // recursive binary search

  /*
  // creating all possible sized sub array
  vector<int> v1={4,3,7,2};
  for(int i=0;i<v1.size();i++)
  {
    int e=0;
    int x=v1.size()-(i+1) +1;
    cout<< "total " << x << " subarrays of SIZE "<<i+1<< endl;

    for(int j=0;j<x;j++)
    {
      vector<int> v2(i+1);
      int c=j;

      for(int k=0;k<(i+1);k++)
      {
        v2[k]=v1[c];
        c++;
        cout << "subarray no. "<<j+1 << " ";
        cout<< v2[k]<< endl;
      }
      // j=c;  // this is getting output wrong because, after j=c, it goes to j loop, increase its value again


    }

  }

  */
  return 0;
}
