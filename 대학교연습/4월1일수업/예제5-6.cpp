#include <iostream>
using namespace std;

class Circle{
private:
    int radius;
public:
    Circle();
    Circle(int r);
    ~Circle();
    double getArea(){return 3.14*radius*radius;}
    int getRadius(){return radius;}
    void setRadius(int radius){this->radius = radius;}
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

// 주소값을 전달하여 값을 바꾸려 할때
// void increaseCircle(Circle *p){
//     int r = p->getRadius();
//     p->setRadius(r+1);
// }

// int main(){
//     Circle waffle(30);
//     increaseCircle(&waffle);
//     cout << waffle.getRadius() << '\n';
// }

// 참조변수를 이용하여 값을 바꾸려 할때
void increaseCircle(Circle &c){
    int r = c.getRadius();
    c.setRadius(r+1);
}

int main(){
    Circle waffle(30);
    increaseCircle(waffle);
    cout << waffle.getRadius() << '\n';
}