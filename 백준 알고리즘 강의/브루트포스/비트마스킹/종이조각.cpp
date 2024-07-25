#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int a[4][4];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, m;
    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        string str;
        cin >> str;
        for (int j = 0; j < m; j++)
        {
            a[i][j] = str[j] - '0';
        }
    }

    int ans = 0;
    for (int s = 0; s < (1 << (n * m)); s++)
    {
        int sum = 0;
        for (int i = 0; i < n; i++)
        {
            int temp = 0;
            for (int j = 0; j < m; j++)
            {
                int k = i * m + j;
                if ((s & (1 << k)) == 0)
                {
                    temp = temp * 10 + a[i][j];
                }
                else
                {
                    sum += temp;
                    temp = 0;
                }
            }
            sum += temp;
        }

        for (int j = 0; j < m; j++)
        {
            int temp = 0;
            for (int i = 0; i < n; i++)
            {
                int k = i * m + j;
                if ((s & (1 << k)) != 0)
                {
                    temp = temp * 10 + a[i][j];
                }
                else
                {
                    sum += temp;
                    temp = 0;
                }
            }
            sum += temp;
        }
        ans = max(ans, sum);
    }
    cout << ans << '\n';
    return 0;
}