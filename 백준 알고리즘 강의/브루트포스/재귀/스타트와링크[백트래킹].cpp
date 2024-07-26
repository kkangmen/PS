#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int n;
int s[21][21];
vector<int> teamA;
vector<int> teamB;

int ans = 1e9;
void go(int index, char team)
{
    //cout << "go(index, team): " << index << ',' << team << '\n';
    if (team == 'a')
    {
        teamA.push_back(index);
        //cout << "teamA:" << teamA.size() << "teamB: " << teamB.size() << '\n';
    }
    else
    {
        teamB.push_back(index);
        //cout << "teamA:" << teamA.size() << ' ' << "teamB: " << teamB.size() << '\n';
    }

    if (teamA.size() == teamB.size() && teamA.size() == n / 2)
    {
        // 능력치 구하기
        int teamA_sum = 0;
        int teamB_sum = 0;
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

        int val = abs(teamA_sum - teamB_sum);
        //cout << val << '\n';
        ans = min(ans, val);
        return;
    }

    if (teamA.size() > n / 2 || teamB.size() > n / 2)
    {
        return;
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
    for (int i = 1; i < n + 1; i++)
    {
        for (int j = 1; j < n + 1; j++)
        {
            cin >> s[i][j];
        }
    }

    go(1, 'a');
    teamA.clear();
    teamB.clear();
    go(1, 'b');
    //cout << "정답: " << ans << '\n';
    cout << ans << '\n';
    return 0;
}