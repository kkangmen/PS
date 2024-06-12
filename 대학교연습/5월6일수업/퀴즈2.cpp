#include <iostream>
#include <string>
using namespace std;

class Car{
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
        cout << "현재속도= " << speed << "주행거리= " << gear << "색상= " << color << '\n';
    }
};

class SportsCar : public Car{
    bool turbo;
public:
    void setTurbo(bool turbo){
        this->turbo = turbo;
    }
    void showSportCar(){
        showCar();
        if (turbo){
            cout << "turbo 장착됨" << "\n";
        }
        else{
            cout << "turbo 장착되지 않음" << '\n';
        }
    }
};

int main(){
    SportsCar sc;
    sc.setColor("Red");
    sc.setGear(3);
    sc.speedUp(100);
    sc.speedDown(30);
    sc.setTurbo(true);
    sc.showSportCar();
    return 0;
}