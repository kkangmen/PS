#include <iostream>
#include <string>
#include <vector>
using namespace std;

char board[50][50];
int n, m;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        string row;
        cin >> row;
        for (int j = 0; j < row.size(); j++)
        {
            board[i][j] = row[j];
        }
    }

    for (int i, j = 0; i + 8 <= n && j + 8 <= m; i++, j++)
    {
        if (board[i][j] = 'W')
        {
            int cnt = 0;
            for (int k = i; k < i + 8; k++)
            {
                if (k % i == 0)
                {
                    for (int l = j; l < j + 8; l++)
                    {
                        if (l %)
                    }
                }
                else
                {
                    for (int l = j; l < j + 8; l++)
                    {
                        if (board[])
                    }
                }
            }
        }
        else
        {
            int cnt = 0;
        }
    }
    return 0;
}
