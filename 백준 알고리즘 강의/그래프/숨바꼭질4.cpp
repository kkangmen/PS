#include <iostream>
#include <string>
#include <vector>
#include <queue>
#include <algorithm>
using namespace std;

int graph[200001];
int d[200001];
int n, k;
int dx[3] = {-1, 1, 2};
vector<int> v[200001];
vector<int> ans;

void bfs(int x)
{
    queue<int> q;
    q.push(x);
    d[x] = 0;
    while (!q.empty())
    {
        int x = q.front();
        q.pop();
        for (int i = 0; i < 3; i++)
        {
            if (i != 2)
            {
                int nx = x + dx[i];
                if (d[nx] == -1)
                {
                    if (0 <= nx && nx <= 200000)
                    {
                        q.push(nx);
                        d[nx] = d[x] + 1;
                        v[nx].push_back(x);
                    }
                }
            }
            else
            {
                int nx = x * dx[i];
                if (d[nx] == -1)
                {
                    if (0 <= nx && nx <= 200000)
                    {
                        q.push(nx);
                        d[nx] = d[x] + 1;
                        v[nx].push_back(x);
                    }
                }
            }
        }
    }
}
void recursive(int x)
{
    if (v[x].size() == 0)
    {
        ans.push_back(x);
        // cout << x << ' ';
        return;
    }
    ans.push_back(x);
    // cout << x << ' ';
    int k = v[x].front();
    recursive(k);
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> n >> k;
    fill_n(d, 100001, -1);
    bfs(n);
    cout << d[k] << '\n';
    recursive(k);
    reverse(ans.begin(), ans.end());
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << ' ';
    }
    return 0;
}