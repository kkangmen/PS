#include <iostream>
#include <string>

using namespace std;

class Car{
    private:
    int speed;
    string color;
    public:
    void setColor(string a){
        color = a;
    }
    void setSpeed(int b){
        speed = b;
    }
    void speedDown(){
        speed -= 100;
    }
    void printCar(){
        cout << "���� ���� ������ " << color << "�Դϴ�." << '\n';
        cout << "���� ���� �ӵ��� " << speed << "�Դϴ�." << '\n';
    }
};

// void Car::setColor(string a){
//     color = a;
// }
// void Car::setSpeed(int b){
//     speed = b;
// }
// void Car::speedDown(){
//     speed -= 100;
// }
// void Car::printCar(){
//     cout << "���� ���� ������ " << color << "�Դϴ�." << '\n';
//     cout << "���� ���� �ӵ��� " << speed << "�Դϴ�." << '\n';
// }

int main(){
    Car localCar;
    localCar.setColor("white");
    localCar.setSpeed(200);
    localCar.speedDown();
    localCar.printCar();
    return 0;
}