#include <iostream>
#include <string>
using namespace std;

class Circle{
private:
    int radius;
public:
    void setRadius(int r){
        radius = r;
    }
    void showRadius(){
        cout << "반지름" << radius << '\n';
    }
    int getradius(){
        return radius;
    }
};
class Pizza : public Circle{
public:
    double getArea(){
        return getradius1() * getradius1() * 3.14;
    }
    int getradius1(){
        return getradius();
    }
};

int main(){
    Pizza cheesepizza;
    Pizza* pDer = &cheesepizza;
    Circle* pBase = pDer; // 업캐스팅
    // pDer 포인터는 모든 public 멤버 접근 가능
    // pBase 포인터는 기본 클래스(부모 클래스)의 public 멤버만 접근 가능
    // 그렇다면 사용하는 이유??
    // 다형성을 이용해서 코드 재사용성을 높이기 위해서

    pBase->setRadius(100);
    cout << "치즈 피자면적:" << pDer->getArea() << '\n';
}