#include <iostream>
#include <string>
#include <vector>
using namespace std;

int n;
int s[21][21];
vector<int> teamA;
vector<int> teamB;
int min_num = 1e9;

int calculate(vector<int> &teamA, vector<int> &teamB)
{
    int teamA_sum = 0;
    int teamB_sum = 0;
    if (teamA.size() > 1)
    {
        for (int i = 0; i < teamA.size() - 1; i++)
        {
            for (int j = i + 1; j < teamA.size(); j++)
            {
                teamA_sum += s[i][j];
                teamA_sum += s[j][i];
            }
        }
    }
    if (teamB.size() > 1)
    {
        for (int i = 0; i < teamB.size() - 1; i++)
        {
            for (int j = i + 1; j < teamB.size(); j++)
            {
                teamB_sum += s[i][j];
                teamB_sum += s[j][i];
            }
        }
    }
    int ans = abs(teamA_sum - teamB_sum);
    return ans;
}

void go(int index, char team)
{
    cout << "go(index, team) 호출: " << index << ' ' << team << '\n';
    if (index == n)
    {
        if (teamA.size() > 0 && teamB.size() > 0)
        {
            int ans = calculate(teamA, teamB);
            min_num = min(ans, min_num);
        }
        return;
    }

    if (team == 'a')
    {
        teamA.push_back(index);
    }
    else
    {
        teamB.push_back(index);
    }

    go(index + 1, 'a');
    teamA.pop_back();
    go(index + 1, 'b');
    teamB.pop_back();
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cin >> s[i][j];
        }
    }

    go(1, 'a');
    teamA.clear();
    teamB.clear();
    go(1, 'b');
    // cout << min_num << '\n';
    return 0;
}