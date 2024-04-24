#include <iostream>
using namespace std;

class Rectangle{
private:
    int width;
    int height;
public:
    Rectangle(){width = height = 1;}
    Rectangle(int width = 3, int height = 3){
        this->width = width;
        this->height = height;
    }
    Rectangle(int length){
        width = length;
        height = length;
    }
    bool issquare();
};

bool Rectangle::issquare(){
    if (width == height){
        return true;
    }
    else {
        return false;
    }
}
int main(){
    Rectangle rect1;
    Rectangle rect2(3, 5);
    Rectangle rect3(3);
    

    if(rect1.issquare()){
        cout << "rect1�� ���簢���̴�." << '\n';
    }
    if(rect2.issquare()){
        cout << "rect2�� ���簢���̴�." << '\n';
    }
    if(rect3.issquare()){
        cout << "rect3�� ���簢���̴�." << '\n';
    }
    return 0;
}