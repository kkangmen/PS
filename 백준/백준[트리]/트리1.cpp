#include <iostream>
#include <cstring>
#include <vector>
#include <fstream>
using namespace std;

int n, m;
vector<int> graph[501];
bool isvisited[501];
int val[501];
int caseNum = 1;
bool cycle = false;
bool dfs(int x, int cnt)
{
    if (isvisited[x] == true)
    {
        return cnt - val[x] >= 3;
    }
    isvisited[x] = true;
    val[x] = cnt;
    for (int i = 0; i < graph[x].size(); i++)
    {
        int y = graph[x][i];
        dfs(y, cnt + 1);
    }
    return false;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    while (true)
    {
        cin >> n >> m;

        if (n == 0 && m == 0)
        {
            break;
        }
        memset(isvisited, false, sizeof(isvisited));
        memset(val, 0, sizeof(val));
        for (int i = 0; i < m; i++)
        {
            int v, u;
            cin >> v >> u;
            graph[v].push_back(u);
            graph[u].push_back(v);
        }

        int cnt = 0;
        for (int i = 1; i <= n; i++)
        {
            if (isvisited[i] == false)
            {
                if (!dfs(i, 0))
                {
                    cnt++;
                }
            }
        }

        if (cnt == 1)
        {
            cout << "Case " << caseNum << ": There is one tree." << '\n';
        }
        else if (cnt == 0)
        {
            cout << "Case " << caseNum << ": No trees." << '\n';
        }
        else
        {
            cout << "Case " << caseNum << ": A forest of " << cnt << " trees." << '\n';
        }
        caseNum++;
    }
    return 0;
}
