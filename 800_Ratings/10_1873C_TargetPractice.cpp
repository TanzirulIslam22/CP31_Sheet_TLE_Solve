/*
Problem_Name: 1873C_Target_Practice
Author: Tanzirul_Islam
*/

#include <bits/stdc++.h>
using namespace std;

const int score[10][10] = {
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {1, 2, 2, 2, 2, 2, 2, 2, 2, 1},
    {1, 2, 3, 3, 3, 3, 3, 3, 2, 1},
    {1, 2, 3, 4, 4, 4, 4, 3, 2, 1},
    {1, 2, 3, 4, 5, 5, 4, 3, 2, 1},
    {1, 2, 3, 4, 5, 5, 4, 3, 2, 1},
    {1, 2, 3, 4, 4, 4, 4, 3, 2, 1},
    {1, 2, 3, 3, 3, 3, 3, 3, 2, 1},
    {1, 2, 2, 2, 2, 2, 2, 2, 2, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1}}; // Scoring Grid

int main()
{
    int test;
    cin >> test;
    while (test--)
    {
        char a[10][10]; // For each test case, initializing a 10x10 character array to store the grid

        for (int i = 0; i < 10; i++) // Reads 10 lines of input (each line is 10 characters)
        {
            string s;
            cin >> s;

            for (int j = 0; j < 10; j++) //   Fills the a[10][10] array with those values.
            {
                a[i][j] = s[j];
            }
        }

        // Initialize the total score to 0
        int total_score = 0;

        for (int i = 0; i < 10; i++)
        { // Go through each cell of the grid.
            for (int j = 0; j < 10; j++)
            {
                if (a[i][j] == 'X')
                {
                    total_score += score[i][j]; // If it contains 'X', add the corresponding value from score[i][j] to total_score
                }
            }
        }
        cout << total_score << endl;
    }
}

// tc-> O(n^2) = O(100)
// sc-> O(10*10) = O(100)