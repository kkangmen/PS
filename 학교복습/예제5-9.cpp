//Circle�� ���� �����ڿ� ��ü ����
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
    cout << "���� ������ ���� radius = " << radius << '\n';
}
int main(){
    Circle src(30);
    Circle dest(src); //dest ��ü�� ������ �� Circle(Circle& c)

    cout << "������ ���� = " << src.getArea() << '\n';
    cout << "�纻�� ���� = " << dest.getArea() << '\n';
}