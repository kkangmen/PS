#include <iostream>
#include <cstring>
#include <vector>
#include <algorithm>
using namespace std;

int a[13];

int main()
{
    //ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    while (true)
    {
        int n;
        cin >> n;
        if (n == 0)
        {
            return 0;
        }
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        int temp[n];
        memset(temp, 0, sizeof(temp));
        for (int i = 0; i < 6; i++)
        {
            temp[i] = 1;
        }

        do
        {
            for (int i = 0; i < n; i++)
            {
                if (temp[i])
                {
                    //cout << '\'' << i << '\'' << ": " << a[i] << ' ';
                    cout << a[i] << ' ';
                }
            }
            cout << '\n';
        } while (prev_permutation(temp, temp + n));
        cout << '\n';
    }

    return 0;
}