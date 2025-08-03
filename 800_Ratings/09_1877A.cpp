/*
Problem_Name: 1877A_Goals_of_Victory
Author: Tanzirul_Islam
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int test;
    cin >> test;
    while (test--)
    {
        int teams;
        cin >> teams;

        vector<int> efficiency(teams);
        // U can do also without the vector, using jst a static array
        int last_team_effiency = 0, team_efficiencies = 0;

        for (int i = 0; i < teams - 1; i++)
        {
            cin >> efficiency[i];

            team_efficiencies = team_efficiencies + efficiency[i];
        }
        last_team_effiency = (-1) * team_efficiencies;

        cout << last_team_effiency << endl;
    }
}

// if X-team scores aganist Y-team, so it's efficiency increased X++; But decreased in the opponent efficiency; the net will remain same just like a CONSTANT. Suppose the SUM=0; so, A4=-(A3+A2+A1)

// the main logic is--> The answer is the negative of the sum if the all the others efficiencies.