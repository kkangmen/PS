#include <iostream>
using namespace std;

class Circle{
private:
    int radius;
public:
    void setRadius(int radius){this->radius = radius;}
    double getArea(){
        return radius*radius*3.14;
    }
};

int main(){
    Circle Cir[3];

    int radius;
    for (int i = 0; i < 3; i++){
        cout << "�� " << i+1 << "�� ������ >> ";
        cin >> radius;
        Cir[i].setRadius(radius);
    }

    int count = 0;
    for (int i = 0; i < 3; i++){
        if(Cir[i].getArea()>100){
            count++;
        }
    }
    cout << "������ 100���� ū ���� " << count << "�� �Դϴ�." << '\n';
    return 0;
}
