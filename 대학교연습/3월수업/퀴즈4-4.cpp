#include <iostream>

using namespace std;

class Circle {
    int radius;
public:
    Circle(){radius = 1;}
    Circle(int r){radius = r;}
    void setRadius(int r){radius = r;}
    double getArea(){return radius*radius*3.14;};
};

int main(){
    Circle circleArray[3] = {Circle(10), Circle(20), Circle()};
    Circle *p = circleArray;

    for (int i = 0; i < 3; i++){
        cout << "circleArray[] " << i << "�� ������ " << circleArray[i].getArea() << '\n';
    }
    for (int i = 0; i < 3; i++){
        cout << "*(circleArray+i) " << i << "�� ������ " << (circleArray+i)->getArea() << '\n'; // (*(circleArray+i)).getArea()
    }
    for (int i = 0; i < 3; i++){
        cout << "p[i] " << i << "�� ������ " << p[i].getArea() << '\n';
    }
    for (int i = 0; i < 3; i++){
        cout << "*(p+i) " << i << "�� ������ " << (p+i)->getArea() << '\n'; 
    }
    for (int i = 0; i < 3; i++){
        cout << "p-> " << i << "�� ������ " << p->getArea() << '\n';
    }
    // ���� �߻�
    // for (int i = 0; i < 3; i++, circleArray++){
    //     cout << "Circle" << i << "�� ������ " << circleArray->getArea() << '\n';
    // }
    
    return 0;
}