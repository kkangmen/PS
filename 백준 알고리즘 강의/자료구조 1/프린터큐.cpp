#include <iostream>
#include <string>
#include <vector>
#include <queue>
using namespace std;

int ts;
int n, m;
int val;
queue<pair<int, int>> q;
priority_queue<int> pq;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> ts;
    for (int i = 0; i < ts; i++)
    {
        cin >> n >> m;
        for (int j = 0; j < n; j++)
        {
            cin >> val;
            q.push(make_pair(j, val));
            pq.push(val);
        }

        int cnt = 1;
        while (!q.empty())
        {
            int index = q.front().first;
            int value = q.front().second;
            q.pop();
            if (pq.top() == value)
            {
                pq.pop();
                if (index == m)
                {
                    cout << cnt << '\n';
                    break;
                }
                cnt++;
            }
            else
            {
                q.push(make_pair(index, value));
            }
        }

        while(!q.empty()){
            q.pop();
        }
        while (!pq.empty()){
            pq.pop();
        }
    }
    return 0;
}