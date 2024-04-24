#include <iostream>
using namespace std;

class Circle{
private:
    int radius;
public:
    Circle(){
        radius = 1;
    };
    Circle(int radius){
        this -> radius = radius;
    }
    double getArea(){
        return 3.14*radius*radius;
    }
};

int main(){
    Circle donut;
    Circle pizza(30);

    cout << donut.getArea() << '\n';

    Circle *p;
    p = &donut;
    cout << p->getArea() << '\n';
    cout << (*p).getArea() << '\n';

    p = &pizza;
    cout << p->getArea() << '\n';
    cout << (*p).getArea() << '\n';
    return 0;
}