#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int user_logic(int N, int K) {
    /**
     * Write your logic here.
     * Parameters:
     *     N (int): The size of the initial list
     *     K (int): The number of times the operation is performed
     * Returns:
     *     int: The sum of the remaining elements in arr after K operations, modulo 998244353
     */
    int sum;
    vector<int>v(N);
    for(int i=0;i<N;i++)
    {
        v[i]=i+1;
    }
    vector<int> arr(N);
    arr=v;
    while(K != 0)
    {
        vector<int>positions;
        //  creating positions vector
        for(int i=0;i<arr.size();i++)
        {
            if(i%3 !=0)
            {
                positions.push_back(arr[i]);
            }
        }
        // deleting positions from arr
        // for(int j=positions.size()-1;j>=0;j--)
        // {
        //     arr.erase(arr.begin()+positions[j]);
        // }
        arr=positions;
        if(arr.size() ==0)
        {
            return 0;
        }
        else
        {
            K--;
        }



    }
    sum=accumulate(arr.begin(), arr.end(), 0);

    return sum % 998244353;
}

int main() {
    int N, K;
    std::cin >> N >> K;
    int result = user_logic(N, K);
    std::cout << result << std::endl;
    return 0;
}