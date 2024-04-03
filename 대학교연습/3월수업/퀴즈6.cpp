#include <iostream>

using namespace std;

class Rectangle{
private:
    int width;
    int height;
    int length;
public:
    Rectangle();
    Rectangle(int a, int b);
    Rectangle(int a);
    bool isSquare(int a, int b){
        width = a;
        height = b;
        if (width == height){
            return true;
        }
        else {
            return false;
        }
    }
};

Rectangle::Rectangle(){
    length = 1;
}
Rectangle::Rectangle(int a, int b){
    width = a;
    height = b;
}
Rectangle::Rectangle(int a){
    length = a;
}
int main(){
    Rectangle rect1;
    Rectangle rect2(3,5);
    Rectangle rect3(3);

    
    return 0;
}