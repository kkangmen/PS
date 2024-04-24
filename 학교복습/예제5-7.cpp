#include <iostream>
using namespace std;

class Circle{
private:
    int radius;
public:
    Circle();
    Circle(int radius);
    double getArea(){
        return 3.14 * radius * radius;
    }
    void setRadius(int radius){
        this->radius = radius;
    }
    ~Circle();
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
void readRadius(Circle& c){
    cout << "정수 값으로 반지름을 입력하세요>> ";
    int r;
    cin >> r;
    c.setRadius(r);
}
int main(){
    Circle donut;
    readRadius(donut);
    cout << "donut의 면적 = " << donut.getArea() << '\n';

    return 0;
}