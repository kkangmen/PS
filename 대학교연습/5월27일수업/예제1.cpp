#include <iostream>
#include <vector>

using namespace std;

class CPoint{
    int x, y;
public:
    CPoint(int a = 0, int b = 0): x(a), y(b){}
    void Print(){
        cout << "(" << x << "," << y << ")" << '\n';
    }
};

int main(){
    unsigned i;
    vector<CPoint> cAry(3);
    for (i = 0; i < 3; i++){
        cAry.at(i) = CPoint(i+1,i+1);
    }
    for (i = 0; i < 5; i++){
        cAry.push_back(CPoint(i*2 + 1, i*3 + 1));
    }

    for (i = 0; i < cAry.size(); i++){
        cAry[i].Print();
    }
}

