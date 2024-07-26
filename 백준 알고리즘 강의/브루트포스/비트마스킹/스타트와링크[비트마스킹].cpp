#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int n;
int s[20][20];
vector<int> teamA;
vector<int> teamB;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> s[i][j];
        }
    }

    int min = 1e9;
    for (int i = 4; i < (1 << n); i++)
    {
        teamA.clear();
        teamB.clear();
        int teamA_sum = 0;
        int teamB_sum = 0;
        for (int k = 0; k < n; k++)
        {
            if (i & (1 << k))
            {

                teamA.push_back(k);
            }
            else
            {
                teamB.push_back(k);
            }
        }
        if (teamA.size() == teamB.size())
        {
            for (int i = 0; i < teamA.size() - 1; i++)
            {
                for (int j = i + 1; j < teamA.size(); j++)
                {
                    teamA_sum += s[teamA[i]][teamA[j]];
                    teamA_sum += s[teamA[j]][teamA[i]];
                    teamB_sum += s[teamB[i]][teamB[j]];
                    teamB_sum += s[teamB[j]][teamB[i]];
                }
            }
            int ans = abs(teamA_sum - teamB_sum);
            if (ans < min)
            {
                min = ans;
            }
        }
    }
    cout << min << '\n';
    return 0;
}