// 다운캐스팅
// 동일한 타입의 포인터가 동일한 타입을 가리키는 것
// 파생 클래스 포인터 -> 파생 클래스 객체
// 사용이유: 다형성과 코드 재사용성을 높이기 위해

#include <iostream>
#include <string>
using namespace std;

class Point {
    int x, y;
public:
    void set(int x, int y){
        this-> x = x;
        this-> y = y;
    }
    void showPoint(){
        cout << '(' << x << ',' << y << ')' << '\n';
    }
};

class ColorPoint : public Point{
    string color;
public:
    void setColor(string color){
        this->color = color;
    }
    void showColorPoint(){
        cout << color;
        showPoint();
    }
};

int main(){
    ColorPoint cp;
    ColorPoint *pDer;
    Point* pBase = &cp; //업캐스팅

    pBase->set(3,4);
    pBase->showPoint();

    pDer = (ColorPoint*)pBase; //다운캐스팅
    pDer->setColor("Red");
    pDer->showColorPoint();
    return 0;
}