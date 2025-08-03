#include <bits/stdc++.h>
using namespace std;

int main()
{
    int test;
    cin >> test;
    while (test--)
    {
        int n, k;
        cin >> n >> k;
        vector<int> segment(n);
        bool found = false;

        for (int i = 0; i < n; i++)
        {
            cin >> segment[i];

            if (segment[i] == k)
                found = true;
        }
        if (found)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}

/*----Most Optimized----
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int test;
    cin >> test;
    while (test--)
    {
        int n, k;
        cin >> n >> k;

        bool found = false;

        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            if (x == k)
            {
                found = true;
                // Early exit from the loop
                // No need to read the rest
                // (Optional optimization)
                // But only safe if problem allows skipping inputs
            }
        }

        cout << (found ? "YES" : "NO") << endl;
    }

    return 0;
}

*/