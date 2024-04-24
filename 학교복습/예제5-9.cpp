//Circle의 복사 생성자와 객체 복사
#include <iostream>
using namespace std;

class Circle{
private:
    int radius;
public:
    Circle(Circle& c);
    Circle(int radius){this->radius = radius;}
    double getArea(){
        return 3.14*radius*radius;
    }
};

Circle::Circle(Circle& c){
    this->radius = c.radius;
    cout << "복사 생성자 실행 radius = " << radius << '\n';
}
int main(){
    Circle src(30);
    Circle dest(src); //dest 객체가 생성될 때 Circle(Circle& c)

    cout << "원본의 면적 = " << src.getArea() << '\n';
    cout << "사본의 면적 = " << dest.getArea() << '\n';
}