#include <iostream>
#include <string>
#include <vector>
#include <string>
#include <algorithm>
#include <cmath>
using namespace std;

int num[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
int k;
int a[10];
bool isused[10];
char sign[10];
int sign_int[10];
vector<string> v;
int max_num = 1e9;
int min_num = 0;
void check()
{
    // cout << "check() 진입";
    int ans[k];
    for (int i = 0; i < k; i++)
    {
        if (a[i] < a[i + 1])
        {
            ans[i] = 0;
        }
        else
        {
            ans[i] = 1;
        }
    }

    if (equal(sign_int, sign_int + k, ans))
    {
        // cout << "조건성립" << '\n';
        string sum;
        for (int i = 0; i < k + 1; i++)
        {
            // cout << a[i];
            sum += (a[i]+'0');
        }
        //cout << "sum: " << sum << '\n';
        v.push_back(sum);
    }
}
void go(int len)
{
    // cout << "go(len) 호출: " << len << '\n';
    if (len == k + 1)
    {
        check();
        // for (int i = 0; i < k+1; i++){
        //     cout << a[i];
        // }
        return;
    }

    for (int i = 0; i < 10; i++)
    {
        if (isused[i])
        {
            continue;
        }
        else
        {
            isused[i] = true;
            a[len] = num[i];
            go(len + 1);
            isused[i] = false;
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> k;
    for (int i = 0; i < k; i++)
    {
        cin >> sign[i];
    }

    for (int i = 0; i < k; i++)
    {
        if (sign[i] == '<')
        {
            sign_int[i] = 0;
        }
        else
        {
            sign_int[i] = 1;
        }
    }

    // for (int i = 0; i < k; i++){
    //     cout << sign[i] << ' ';
    // }
    // cout << '\n';
    // for (int i = 0; i < k; i++){
    //     cout << sign_int[i] << ' ';
    // }
    // cout << '\n';
    go(0);

    // for (int i = 0; i < v.size(); i++){
    //     cout << v[i] << ' ';
    // }
    auto p = minmax_element(v.begin(), v.end());
    cout << *p.second << '\n';
    cout << *p.first << '\n';
    return 0;
}