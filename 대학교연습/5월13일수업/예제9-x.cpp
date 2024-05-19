#include <iostream>
using namespace std;

class Shape{
public:
    void paint(){
        draw();
    }
    virtual void draw(){
        cout << "Shape::draw() called" << '\n';
    }
};

class Circle: public Shape{
public:
    virtual void draw(){
        cout << "Circle::draw() called" << '\n';
    }
};

int main(){
    Shape *pShape = new Circle();
    pShape->paint();
    delete pShape;
    return 0;
}