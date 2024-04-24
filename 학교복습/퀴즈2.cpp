#include <iostream>
using namespace std;

class Car{
private:
    int speed;
    string color;
public:
    void setspeed(int speed){
        this->speed = speed;
    }
    void setcolor(string color){
        this->color = color;
    }
    void speedup(){
        speed += 10;
    }
    void speeddown(){
        speed -= 10;
    }
    void printcar(){
        cout << "���� ���� ������ " << color;
        cout << "\t���� ���� �ӵ��� " << speed << '\n';
    }
};
Car globalcar;
int main(){
    Car localcar;
    globalcar.setcolor("white");
    globalcar.setspeed(100);
    globalcar.speedup();

    localcar.setcolor("red");
    localcar.setspeed(200);
    localcar.speeddown();
    localcar.printcar();
    return 0;
}