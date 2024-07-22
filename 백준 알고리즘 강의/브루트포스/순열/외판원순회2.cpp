#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#define MIN 1e8
using namespace std;

int n;
int w[11][11];
int a[11];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        a[i] = i;
        for (int j = 1; j <= n; j++)
        {
            cin >> w[i][j];
        }
    }

    int min = MIN;
    do
    {
        int sum = 0;
        bool possible = true;
        for (int i = 1; i < n; i++)
        {
            int val = w[a[i]][a[i + 1]];
            if (val == 0)
            {
                possible = false;
            }
            else
            {
                sum += w[a[i]][a[i + 1]];
            }
            //cout << a[i] << "->" << a[i+1] << ": " << val << ' ';
        }
        if (possible && w[a[n]][a[1]] != 0){
            sum += w[a[n]][a[1]];
            if (min > sum){
                min = sum;
            }
        }
        //cout << a[n] << "->" << a[1] << ": " << w[a[n]][a[1]] << ' ';
        //cout << "ºñ¿ë: " << sum << '\n';
    } while (next_permutation(a + 1, a + n + 1));
    cout << min << '\n';
    return 0;
}