#include <string>
#include <iostream>
#include <list>
#include <algorithm>
using namespace std;

class CPoint
{
    int x, y;

public:
    CPoint(int a = 0, int b = 0)
    {
        x = a;
        y = b;
    }
    int getX() { return x; }
    int getY() { return y; }
    bool operator<(CPoint &Po)
    {
        return (x + y < Po.x + Po.y) ? true : false;
    }
    friend ostream &operator<<(ostream &out, CPoint &Po);
};

ostream &operator<<(ostream &out, CPoint &Po)
{
    out << "(" << Po.x << ", " << Po.y << ")";
    return out;
}

void PrintList(list<CPoint> CPointL, string name)
{
    cout << name << ": ";
    list<CPoint>::iterator it;
    for (it = CPointL.begin(); it != CPointL.end(); it++)
    {
        cout << *it << ' ';
    }
    cout << '\n';
}

bool Compare(CPoint a, CPoint b)
{
    return a.getX() + a.getY() > b.getX() + b.getY() ? true : false;
}

int main()
{
    list<CPoint> CPointL;
    CPointL.push_back(CPoint(5, 3));
    CPointL.push_back(CPoint(2, 9));
    CPointL.push_back(CPoint(1, 1));
    CPointL.push_back(CPoint(2, 5));
    CPointL.push_back(CPoint(3, 7));
    PrintList(CPointL, "정렬 전");
    CPointL.sort();
    PrintList(CPointL, "정렬 후");
    CPointL.sort(Compare);
    PrintList(CPointL, "내림차순 정렬");
}