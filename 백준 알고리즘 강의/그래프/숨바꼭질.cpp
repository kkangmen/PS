#include <iostream>
#include <string>
#include <vector>
#include <queue>
using namespace std;

int graph[200001];
int d[200001];
int n, k;
int dx[3] = {-1, 1, 2};

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
                    }
                }
            }
        }
    }
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
    // for (int i = 0; i < k; i++){
    //     cout << d[i] << ' ';
    // }
    // cout << d[4];
    return 0;
}