// ���� ���� ȣ�� �� �Ű������� ������ ������� ����
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
    cout << "������ ���� radius = " << radius << '\n';
}
Circle::Circle(int radius){
    this->radius = radius;
    cout << "������ ���� radius = " << radius << '\n';
}
Circle::~Circle(){
    cout << "�Ҹ��� ���� radius = " << radius << '\n';
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