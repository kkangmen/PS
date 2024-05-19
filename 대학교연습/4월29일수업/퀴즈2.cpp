#include <iostream>
using namespace std;

class CPoint{
private:
    int x, y;
public:
    CPoint(int x = 0, int y = 0){
        this->x = x;
        this->y = y;
    }
    void Print(){
        cout << '(' << x << ',' << y << ')' << '\n';
    }
    friend CPoint operator-(CPoint);
};

CPoint operator-(CPoint a){
    return CPoint(-a.x, -a.y);
}
int main(){
    CPoint P1(2,2);
    CPoint P2 = -P1;
    CPoint P3 = -(-P1);

    P1.Print();
    P2.Print();
    P3.Print();

    return 0;
}