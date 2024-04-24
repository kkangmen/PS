#include <iostream>
using namespace std;

class Circle{
    static int numOfCircles;
    int radius;
public:
    Circle(int r = 1);
    ~Circle(){numOfCircles--;}
    double getArea() {return 3.14*radius*radius;}
    static int getNumOfCircles(){return numOfCircles;}
};
Circle::Circle(int r){
    radius = 1;
    numOfCircles++;
}
int Circle::numOfCircles = 0;

int main(){
    Circle *p = new Circle[10];
    cout << "�����ϰ� �ִ� ���� ���� = " << Circle::getNumOfCircles() << '\n';
}