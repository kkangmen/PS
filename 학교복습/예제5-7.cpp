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
    cout << "������ ���� radius = " << radius << '\n';
}
Circle::Circle(int radius){
    this->radius = radius;
    cout << "������ ���� radius = " << radius << '\n';
}
Circle::~Circle(){
    cout << "�Ҹ��� ���� radius = " << radius << '\n';
}
void readRadius(Circle& c){
    cout << "���� ������ �������� �Է��ϼ���>> ";
    int r;
    cin >> r;
    c.setRadius(r);
}
int main(){
    Circle donut;
    readRadius(donut);
    cout << "donut�� ���� = " << donut.getArea() << '\n';

    return 0;
}