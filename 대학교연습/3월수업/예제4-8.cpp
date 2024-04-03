#include <iostream>

using namespace std;

class Circle{
    int radius;
    public:
    Circle();
    Circle(int r);
    ~Circle();
    void setRadius(int r){radius = r;}
    double getArea(){return 3.14*radius*radius;}
};

Circle::Circle(){
    radius = 1;
    cout << "������ ���� radius = " << radius << '\n';
}
Circle::Circle(int r){
    radius = r;
    cout << "������ ���� radius = " << radius << '\n';
}
Circle::~Circle(){
    cout << "�Ҹ��� ���� radius = " << radius << '\n';
}
int main(){
    int radius;
    while (1){
        cout << "���� ������ �Է�(�����̸� ����) >> ";
        cin >> radius;
        if (radius < 0){
            return 0;
        }
        Circle *p = new Circle(radius); // ���� �޸� (���α׷� ������ �������)
        cout << "���� ������ " << p->getArea() << '\n';
        delete p;
    }
    return 0;
}