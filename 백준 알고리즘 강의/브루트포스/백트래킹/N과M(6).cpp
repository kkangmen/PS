#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int n, m;
int num[10];
int a[10];

void go(int cnt, int start)
{
    if (cnt == m)
    {
        for (int i = 0; i < m; i++)
        {
            cout << a[i] << ' ';
        }
        cout << '\n';
        return;
    }

    for (int i = start; i < n; i++)
    {
        a[cnt] = num[i];
        go(cnt + 1, i + 1);
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        cin >> num[i];
    }

    sort(num, num + n);
    go(0, 0);
    return 0;
}