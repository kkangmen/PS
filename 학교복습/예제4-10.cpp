#include <iostream>
using namespace std;

class Circle{
private:
    int radius;
public:
    Circle(){radius = 1;}
    void setRadius(int radius){
        this->radius = radius;
    }
    double getArea(){
        return 3.14*radius*radius;
    }
};
int main(){
    cout << "�����ϰ��� �ϴ� ���� ����?";
    int n, radius;
    cin >> n;

    Circle *pArray = new Circle[n];
    for (int i = 0; i < n; i++){
        cout << "��" << i+1 << ": ";
        cin >> radius;
        pArray[i].setRadius(radius);
    }

    int count = 0;
    for (int i = 0; i < n; i++){
        cout << pArray[i].getArea() << '\n';
    }
    cout << count << '\n';

    delete []pArray;
    return 0;
}