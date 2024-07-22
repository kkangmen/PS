#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int n;
int a[8];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a, a + n);
    int sum = 0;
    for (int i = 1; i < n; i++)
    {
        sum += a[i] - a[i - 1];
    }
    int max = sum;

    while (next_permutation(a, a + n))
    {
        int sum = 0;
        for (int i = 1; i < n; i++)
        {
            sum += abs(a[i] - a[i - 1]);
        }
        //cout << sum << '\n';
        if (max < sum)
        {
            max = sum;
        }
    }

    cout << max << '\n';
    return 0;
}