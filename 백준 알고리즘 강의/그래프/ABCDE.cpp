// 방법1. DFS, 백트래킹을 이용하여 구현
// #include <iostream>
// #include <string>
// #include <vector>
// using namespace std;

// vector<int> graph[2000];
// bool isvisited[2000];
// int n, m;
// int cnt = 0;
// bool ans;

// void dfs(int x, int cnt)
// {
//     if (cnt == 4)
//     {
//         ans = true;
//         return;
//     }
//     isvisited[x] = true;

//     for (int i = 0; i < graph[x].size(); i++)
//     {
//         int y = graph[x][i];
//         if (!isvisited[y])
//         {
//             dfs(y, cnt+1);
//             isvisited[y] = false;
//         }
//     }
// }
// int main()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
//     cout.tie(NULL);

//     cin >> n >> m;
//     for (int i = 0; i < m; i++)
//     {
//         int v, e;
//         cin >> v >> e;
//         graph[v].push_back(e);
//         graph[e].push_back(v);
//     }

//     for (int i = 0; i < n; i++)
//     {
//         dfs(i,0);
//         isvisited[i] = false;

//         if (ans){
//             cout << 1 << '\n';
//             return 0;
//         }
//     }

//     cout << 0 << '\n';
//     return 0;
// }

// 방법2. 간선리스트, 인접행렬, 인접리스트 이용하여 구현
#include <iostream>
#include <string>
#include <vector>
using namespace std;

vector<int> graph[2000];
bool arr[2000][2000];
vector<pair<int, int>> edges;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, m;
    cin >> n >> m;

    for (int i = 0; i < m; i++)
    {
        int v, e;
        cin >> v >> e;
        graph[v].push_back(e);
        graph[e].push_back(v);
        arr[v][e] = arr[e][v] = true;
        edges.push_back(make_pair(v, e));
        edges.push_back(make_pair(e, v));
    }

    m *= 2;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < m; j++)
        {
            // A -> B
            int a = edges[i].first;
            int b = edges[i].second;

            // C -> D
            int c = edges[j].first;
            int d = edges[j].second;

            if (a == b || a == c || a == d || b == c || b == d || c == d)
            {
                continue;
            }

            // B -> C
            if (!arr[b][c])
            {
                continue;
            }

            // D -> E
            for (int i = 0; i < graph[d].size(); i++)
            {
                int y = graph[d][i];
                if (y == a || y == b || y == c || y == d)
                {
                    continue;
                }
                cout << 1 << '\n';
                return 0;
            }
        }
    }
    cout << 0 << '\n';
    return 0;
}