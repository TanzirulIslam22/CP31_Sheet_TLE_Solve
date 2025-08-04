/*
Problem_Name: 1866A_Ambitious_Kid
Author: Tanzirul_Islam
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n;
    cin >> n;
    vector<long long> operations(n);  //long long because number can be upto 10^5

    for (int i = 0; i < n; i++)
    {
        cin >> operations[i];
    }

    long long minimum_operations = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        minimum_operations = min(minimum_operations, abs(operations[i])); // should match 'data type'
    }
    cout << minimum_operations << endl;
}

/*  1s=10^8 operations
 here, 1 test
operations per test case = time/test = 10^8/1= 10^8 ops
 O(nlogn)
 O(n)
 O(logn)
O(1)
*/