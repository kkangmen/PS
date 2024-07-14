#include <iostream>
#include <cstring>
#include <vector>
#include <queue>
#include <tuple>
using namespace std;

int d[1001][1001];
int s;

void bfs()
{
    queue<pair<int, int>> q;
    q.push(make_pair(1, 0));
    d[1][0] = 0;
    while (!q.empty())
    {
        int r, c;
        tie(r, c) = q.front();
        q.pop();
        if (d[r][r] == -1)
        {
            d[r][r] = d[r][c] + 1;
            q.push(make_pair(r, r));
        }
        if (r + c <= s && d[r + c][c] == -1)
        {
            d[r + c][c] = d[r][c] + 1;
            q.push(make_pair(r + c, c));
        }
        if (r - 1 >= 0 && d[r - 1][c] == -1)
        {
            d[r - 1][c] = d[r][c] + 1;
            q.push(make_pair(r - 1, c));
        }
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    memset(d, -1, sizeof(d));
    cin >> s;
    bfs();

    int ans = -1;
    for (int i = 0; i <= s; i++)
    {
        if (d[s][i] != -1)
        {
            if (ans == -1 || ans > d[s][i])
            {
                ans = d[s][i];
            }
        }
    }
    cout << ans << '\n';
    return 0;
}