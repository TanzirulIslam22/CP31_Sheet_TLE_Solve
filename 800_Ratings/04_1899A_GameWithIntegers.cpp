#include <bits/stdc++.h>
using namespace std;

#define ll long long
int main()
{

    int test;
    cin >> test;
    while (test--)
    {

        ll n;
        cin >> n;
        if (n % 3 == 0)
        {

            cout << "Second" << endl;
        }
        else
        {
            cout << "First" << endl;
        }
    }
    return 0;
}
