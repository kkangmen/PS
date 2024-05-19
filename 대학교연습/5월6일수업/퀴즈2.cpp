#include <iostream>
#include <string>
using namespace std;

class Car{
private:
    int speed = 0;
    int gear;
    string color;
public:
    void setGear(int newGear){
        gear = newGear;
    }
    void setColor(string color){
        this->color = color;
    }
    void speedUp(int increment){
        speed += increment;
    }
    void speedDown(int decrement){
        speed -= decrement;
    }
    void showCar(){
        cout << "현재속도 = " << speed << "주행거리 = " << gear << "색상 = " << color << '\n';
    }
};

class SportCar : public Car{
private:
    bool turbo;
public:
    bool setTurbo(){
        
    }
    void showSportCar(){

    }
};
int main(){
    SportCar sc;
    sc.setColor("Red");
    sc.setFear(3);
    sc.speedUp(100);
    sc.speedDown(30);
    sc.setRurbo(true);
    sc.showSportCar();
    return 0;
}