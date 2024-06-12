#include <iostream>
using namespace std;

class Circle{
    int radius;
public:
    Circle(int radius){
        this->radius = radius;
    }
    int getRadius(){
        return radius;
    }
};

template <class T>
void myswap(T &a, T &b){
    T tmp = a;
    a = b;
    b = tmp;
}

int main(){
    int a = 4, b = 5;
    myswap(a,b);
    cout << "a = " << a << "," << "b = " << b << '\n';

    double c = 0.3, d = 12.5;
    myswap(c, d);
    cout << "c = " << c << "," << "d = " << d << '\n';

    Circle donut(5), pizza(20);
    myswap(donut, pizza);
    cout << donut.getRadius() << ' ' << pizza.getRadius() << '\n';
    return 0;
}