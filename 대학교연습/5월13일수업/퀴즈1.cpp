#include <iostream>
#include <string>
using namespace std;

class Shape{
    int x,y;
public:
    Shape(){
        cout << "Shape 持失切()" << '\n';
    }
    Shape(int xloc, int yloc): x(xloc), y(yloc){
        cout << "Shape 持失切(" << xloc << "," << yloc << ")" << '\n';
    }
    ~Shape(){
        cout << "Shape 社瑚切()" << '\n';
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