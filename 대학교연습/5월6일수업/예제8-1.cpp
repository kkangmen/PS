#include <iostream>
#include <string>
using namespace std;

class Point{
    int x, y;
public:
    void set(int x, int y){
        this->x = x;
        this->y = y;
    }
    void showPoint(){
        cout << '(' << x << ',' << y << ')' << '\n';
    }
};

class ColorPoint : public Point{
    string color;
public:
    ColorPoint(string color = "Red"){
        this->color = color;
    }
    void setColor(string color){
        this->color = color;
    }
    void showColorPoint(){
        cout << color;
        showPoint();
    }
};
int main(){
    Point p1;
    p1.set(2,2);
    Point *p = new ColorPoint(); //업캐스팅
    p->set(1,1);
    p->showPoint();

    Point *k = &p1;
    ColorPoint *pDer;
    pDer = (ColorPoint*)k; // 다운캐스팅
    pDer->set(1,1);
    pDer->showColorPoint();
}