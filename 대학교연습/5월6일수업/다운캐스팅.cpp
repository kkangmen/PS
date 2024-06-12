// �ٿ�ĳ����
// ������ Ÿ���� �����Ͱ� ������ Ÿ���� ����Ű�� ��
// �Ļ� Ŭ���� ������ -> �Ļ� Ŭ���� ��ü
// �������: �������� �ڵ� ���뼺�� ���̱� ����

#include <iostream>
#include <string>
using namespace std;

class Point {
    int x, y;
public:
    void set(int x, int y){
        this-> x = x;
        this-> y = y;
    }
    void showPoint(){
        cout << '(' << x << ',' << y << ')' << '\n';
    }
};

class ColorPoint : public Point{
    string color;
public:
    void setColor(string color){
        this->color = color;
    }
    void showColorPoint(){
        cout << color;
        showPoint();
    }
};

int main(){
    ColorPoint cp;
    ColorPoint *pDer;
    Point* pBase = &cp; //��ĳ����

    pBase->set(3,4);
    pBase->showPoint();

    pDer = (ColorPoint*)pBase; //�ٿ�ĳ����
    pDer->setColor("Red");
    pDer->showColorPoint();
    return 0;
}