#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int tc;

    cin >> tc;
    for (int i = 0; i < tc; i++)
    {
        int m, n, x, y;
        cin >> m >> n >> x >> y;

        bool check = false;
        x -= 1;
        y -= 1;

        for (int j = x; j < m * n; j += m)
        {
            if (j % n == y)
            {
                cout << j + 1 << '\n';
                check = true;
                break;
            }
        }
        if (!check)
        {
            cout << -1 << '\n';
        }
    }
    return 0;
}