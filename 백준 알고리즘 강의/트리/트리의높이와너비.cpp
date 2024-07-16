#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

struct Node
{
    int left;
    int right;
    int depth;
    int col;
};
Node a[10001];
int cnt[10001];
int left_arr[100001];
int right_arr[10001];
int n;
int col = 0;
void inorder(int node, int depth)
{
    if (node == -1)
    {
        return;
    }
    inorder(a[node].left, depth + 1);
    a[node].depth = depth;
    a[node].col = ++col;
    inorder(a[node].right, depth + 1);
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        int x, y, z;
        cin >> x >> y >> z;
        a[x].left = y;
        a[x].right = z;
        if (y != 1)
        {
            cnt[y] += 1;
        }
        if (z != 1)
        {
            cnt[z] += 1;
        }
    }

    int root = 0;
    for (int i = 1; i <= n; i++)
    {
        if (cnt[i] == 0)
        {
            root = i;
        }
    }
    inorder(root, 1);

    int max_depth = 0;
    for (int i = 1; i <= n; i++)
    {
        int depth = a[i].depth;
        int col = a[i].col;
        if (left_arr[depth] == 0)
        {
            left_arr[depth] = col;
        }
        else
        {
            left_arr[depth] = min(left_arr[depth], col);
        }
        right_arr[depth] = max(right_arr[depth], col);
        max_depth = max(max_depth, depth);
    }

    int ans = 0;
    int ans_depth = 0;
    for (int i = 1; i <= max_depth; i++)
    {
        int temp = right_arr[i] - left_arr[i] + 1;
        if (ans < temp)
        {
            ans = temp;
            ans_depth = i;
        }
    }
    cout << ans_depth << ' ' << ans << '\n';
    return 0;
}
