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
        cout << "������" << radius << '\n';
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
    Circle* pBase = pDer; // ��ĳ����
    // pDer �����ʹ� ��� public ��� ���� ����
    // pBase �����ʹ� �⺻ Ŭ����(�θ� Ŭ����)�� public ����� ���� ����
    // �׷��ٸ� ����ϴ� ����??
    // �������� �̿��ؼ� �ڵ� ���뼺�� ���̱� ���ؼ�

    pBase->setRadius(100);
    cout << "ġ�� ���ڸ���:" << pDer->getArea() << '\n';
}