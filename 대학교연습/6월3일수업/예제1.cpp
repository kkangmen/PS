#include <string>
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class CPoint{
    int x,y;
public:
    CPoint(int a = 0, int b = 0){
        x = a;
        y = b;
    }
    int getX(){return x;}
    int getY(){return y;}
    bool operator < (CPoint &Po){
        return (x+y < Po.x + Po.y)? true : false;
    }
    friend ostream &operator<<(ostream &out, CPoint &Po);
};

ostream &operator<<(ostream &out, CPoint &Po){
    out << "(" << Po.x << ", " << Po.y << ")";
    return out;
}


void PrintVector(vector<CPoint> &intV, string name){
    cout << name << ": ";
    vector<CPoint>::iterator it;
    for (it = intV.begin(); it != intV.end(); it++){
        cout << *it << ' ';
    }
    cout << '\n';
}

bool Compare(CPoint &a, CPoint &b){
    return a.getX() + a.getY() > b.getX() + b.getY()? true : false;
}

int main(){
    vector<CPoint> intV(5);
    intV[0] = CPoint(5, 3);
    intV[1] = CPoint(2, 9);
    intV[2] = CPoint(1, 1);
    intV[3] = CPoint(2, 5);
    intV[4] = CPoint(3, 7);
    PrintVector(intV, "정렬 전");
    sort(intV.begin(), intV.end());
    PrintVector(intV, "정렬 전");
    sort(intV.begin(), intV.end(), Compare);
    PrintVector(intV, "정렬 후");
}