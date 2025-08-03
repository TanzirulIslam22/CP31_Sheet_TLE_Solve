#include <bits/stdc++.h>
using namespace std;

#define ll long long // Define 'll' as 'long long'

int main()
{
    int test;
    cin >> test;
    while (test--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;

        bool constinuous_three_empty_cells = false;

        int total_count_of_the_empty_cells = 0;

        for (int i = 0; i < n; i++) // O(n)
        {
            if (s[i] == '.' && i + 1 < n && s[i + 1] == '.' && i + 2 < n && s[i + 2] == '.')
            {
                constinuous_three_empty_cells = true;
                break;
            }
            if (s[i] == '.')
            {
                total_count_of_the_empty_cells++;
            }
        }
        if (constinuous_three_empty_cells)
        {
            cout << "2" << endl;
        }
        else
        {
            cout << total_count_of_the_empty_cells << endl;
        }
    }
}

// tc- O(n)=O(100)
// sc-o(n)=O(100)
