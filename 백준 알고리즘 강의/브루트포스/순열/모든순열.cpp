// #include <iostream>
// #include <string>
// #include <vector>
// using namespace std;

// int n;
// int a[9];

// bool next_permutation()
// {
//     int i = n - 1;
//     while (i > 0 && a[i - 1] > a[i])
//     {
//         i -= 1;
//     }
//     if (i <= 0)
//     {
//         return false;
//     }
//     int j = n - 1;
//     while (i <= j && a[i - 1] > a[j])
//     {
//         j -= 1;
//     }
//     swap(a[i - 1], a[j]);
//     j = n - 1;
//     while (i < j)
//     {
//         swap(a[i], a[j]);
//         i += 1;
//         j -= 1;
//     }
//     return true;
// }
// int main()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
//     cout.tie(NULL);

//     cin >> n;
//     for (int i = 0; i < n; i++)
//     {
//         a[i] = i + 1;
//     }

//     for (int i = 0; i < n; i++)
//     {
//         cout << a[i] << ' ';
//     }
//     cout << '\n';
//     while (next_permutation())
//     {
//         for (int i = 0; i < n; i++)
//         {
//             cout << a[i] << ' ';
//         }
//         cout << '\n';
//     }
//     return 0;
// }

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
        a[i] = i + 1;
    }
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << ' ';
    }
    cout << '\n';
    while (next_permutation(a, a + n))
    {
        for (int i = 0; i < n; i++)
        {
            cout << a[i] << ' ';
        }
        cout << '\n';
    }
    return 0;
}