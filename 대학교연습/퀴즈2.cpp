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
        cout << "현재 차의 색상은 " << color << "입니다." << '\n';
        cout << "현재 차의 속도는 " << speed << "입니다." << '\n';
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
//     cout << "현재 차의 색상은 " << color << "입니다." << '\n';
//     cout << "현재 차의 속도는 " << speed << "입니다." << '\n';
// }

int main(){
    Car localCar;
    localCar.setColor("white");
    localCar.setSpeed(200);
    localCar.speedDown();
    localCar.printCar();
    return 0;
}