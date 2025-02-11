#include <bits/stdc++.h>
using namespace std;
int MaxFreq(vector<int> & num)
    {
        map<int, int> mp;
        int max = 0;
        for (int i = 0; i < num.size(); i++)
        {
            mp[num[i]]++;
            if (mp[num[i]] > max)
            {
                max = mp[num[i]];
            }
        }
        return max;
    }
    int maxFrequency(vector<int> & nums, int k)
    {
        int freq = 0;
        while (k > 0)
        {
            for (int i = 0; i < nums.size(); i++)
            {
                for (int j = 0; j < nums.size(); j++)
                {
                    if (i != j)

                    {
                        int dif = nums[j] - nums[i];
                        if (dif > 0 && dif <= k)
                        {
                            nums[i] = nums[i] + (dif);
                            k = k - dif;
                        }
                        int maxf = MaxFreq(nums);
                        if (maxf > freq)
                        {
                            freq = maxf;
                        }
                    }
                }
            }
        }
        return freq;
    }
int main()
{
    vector<int> vf={1,4,8,13};
    int a;
    a=maxFrequency(vf,5);
    cout << a; 
    
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
    vector<int> v; // this creates empty container :  { }
    v.push_back(1);
    v.emplace_back(2);

    // difeerence b/w emplace and push is in SYNTAX while pushing a pair.
    vector<pair<int, int>> vec;
    vec.push_back({3, 9});
    vec.emplace_back(1, 2);

    // container having 100, 5 times as elements
    vector<int> v1(5, 100);

    
}