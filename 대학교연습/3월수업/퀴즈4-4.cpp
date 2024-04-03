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
        cout << "circleArray[] " << i << "의 면적은 " << circleArray[i].getArea() << '\n';
    }
    for (int i = 0; i < 3; i++){
        cout << "*(circleArray+i) " << i << "의 면적은 " << (circleArray+i)->getArea() << '\n'; // (*(circleArray+i)).getArea()
    }
    for (int i = 0; i < 3; i++){
        cout << "p[i] " << i << "의 면적은 " << p[i].getArea() << '\n';
    }
    for (int i = 0; i < 3; i++){
        cout << "*(p+i) " << i << "의 면적은 " << (p+i)->getArea() << '\n'; 
    }
    for (int i = 0; i < 3; i++){
        cout << "p-> " << i << "의 면적은 " << p->getArea() << '\n';
    }
    // 에러 발생
    // for (int i = 0; i < 3; i++, circleArray++){
    //     cout << "Circle" << i << "의 면적은 " << circleArray->getArea() << '\n';
    // }
    
    return 0;
}