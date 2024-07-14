#include <iostream>
#include <cstring>
#include <vector>
#include <deque>
#define MAX 200000
using namespace std;

int graph[MAX];
int n, k;

void bfs(int x)
{
    deque<int> dq;
    dq.push_back(x);
    graph[x] = 0;
    while (!dq.empty())
    {
        int x = dq.front();
        dq.pop_front();
        if (x * 2 < MAX)
        {
            if (graph[x * 2] == -1)
            {
                graph[x * 2] = graph[x];
                dq.push_front(x * 2);
            }
        }
        if (0 <= x - 1)
        {
            if (graph[x - 1] == -1)
            {
                graph[x - 1] = graph[x] + 1;
                dq.push_back(x - 1);
            }
        }
        if (x + 1 < MAX)
        {
            if (graph[x + 1] == -1)
            {
                graph[x + 1] = graph[x] + 1;
                dq.push_back(x + 1);
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
    memset(graph, -1, sizeof(graph));
    bfs(n);
    cout << graph[k] << '\n';
    return 0;
}
