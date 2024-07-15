#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Node
{
private:
    int left;
    int right;

public:
    void setleft(int left)
    {
        this->left = left;
    }
    void setright(int right)
    {
        this->right = right;
    }
    int getleft()
    {
        return left;
    }
    int getright()
    {
        return right;
    }
};
Node a[50];
int n;
void preorder(int x)
{
    if (x == -1)
    {
        return;
    }
    cout << (char)(x + 'A');
    preorder(a[x].getleft());
    preorder(a[x].getright());
}
void inorder(int x)
{
    if (x == -1)
    {
        return;
    }
    inorder(a[x].getleft());
    cout << (char)(x + 'A');
    inorder(a[x].getright());
}
void postorder(int x)
{
    if (x == -1)
    {
        return;
    }
    postorder(a[x].getleft());
    postorder(a[x].getright());
    cout << (char)(x + 'A');
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        char x, y, z;
        cin >> x >> y >> z;
        x = x - 'A';
        if (y == '.')
        {
            a[x].setleft(-1);
        }
        else
        {
            a[x].setleft(y - 'A');
        }

        if (z == '.')
        {
            a[x].setright(-1);
        }
        else
        {
            a[x].setright(z - 'A');
        }
    }
    preorder(0);
    cout << '\n';
    inorder(0);
    cout << '\n';
    postorder(0);
    cout << '\n';
    return 0;
}