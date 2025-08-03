#include <bits/stdc++.h>
using namespace std;

#define ll long long // Define 'll' as 'long long'

int main()
{
    int test;
    cin >> test;
    while (test--)
    {
        ll n, k;
        cin >> n >> k;
        vector<ll> a(n);

        for (int i = 0; i < n; i++) // n
        {
            cin >> a[i];
        }

        vector<ll> copy_a = a;              // n
        sort(copy_a.begin(), copy_a.end()); // nlong
        // using "a" instead of "copy_a" will lose original order

        if (copy_a == a || k > 1) // n
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}

/*
1 sec =10^8 op (Time limit Given)
N=100; so we have 10^6 ops
max we can go O(N^3), O(N^2), O(N), O(nlogn)

Here
 tc= O(nlogn)->O(100log2(100)) -> 100*7 -> 700
 sc= O(n) -> O(100) -> 100 "worst"
 */
