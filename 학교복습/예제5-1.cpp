// 값에 의한 호출 시 매개변수의 생성자 실행되지 않음
#include <iostream>
using namespace std;

class Circle{
private:
    int radius;
public:
    Circle();
    Circle(int r);
    ~Circle();
    double getRadius(){
        return radius;
    }
    void setRadius(int r){
        radius = r;
    }
};

Circle::Circle(){
    radius = 1;
    cout << "생성자 실행 radius = " << radius << '\n';
}
Circle::Circle(int radius){
    this->radius = radius;
    cout << "생성자 실행 radius = " << radius << '\n';
}
Circle::~Circle(){
    cout << "소멸자 실행 radius = " << radius << '\n';
}
void increase(Circle c){
    int r = c.getRadius();
    c.setRadius(r+1);
}

int main(){
    Circle waffle(30);
    increase(waffle);
    cout << waffle.getRadius() << '\n';

    return 0;
}