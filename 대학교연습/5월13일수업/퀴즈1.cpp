#include <iostream>
#include <string>
using namespace std;

class Shape{
    int x,y;
public:
    Shape(){
        cout << "Shape ������()" << '\n';
    }
    Shape(int xloc, int yloc): x(xloc), y(yloc){
        cout << "Shape ������(" << xloc << "," << yloc << ")" << '\n';
    }
    ~Shape(){
        cout << "Shape �Ҹ���()" << '\n';
    }
};

class Rectangle : public Shape{
    int width, height;
public:
    Rectangle(int width, int height) : Shape(, yloc){
        this->width = width;
        this->height = height;
    }
};

int main(){
    Rectangle r(4,6,100,100);
    return 0;
}