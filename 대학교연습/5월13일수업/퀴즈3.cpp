#include <iostream>
#include <string>
using namespace std;

class Circle{
    int radius;
public:
    Circle (int radius = 0){
        this->radius = radius;
    }
    int getRadius(){
        return radius;
    }
    void setRadius(int radius){
        this->radius = radius;
    }
    double getArea(){
        return 3.14*radius*radius;
    }
};

class NamedCircle: public Circle{
    int r;
    string name;
public:
    NamedCircle(int radius = 0, string name = ""):Circle(radius){
        this->name = name;
    }
    void set(int r, string name){
        setRadius(r);
        this->name = name;
    }
    string getName(){
        return name;
    }
};

string biggest(NamedCircle c[], int n){
    int ans = 0;
    for (int i = 0; i < n; i++){
        if (c[ans].getArea() < c[i].getArea()){
            ans = i;
        }   
    }
    return c[ans].getName();
}

int main(){
    NamedCircle c[5];
    cout << "5���� ���� �������� ���� �̸��� �Է��ϼ���" << '\n';
    for (int i = 0; i < 5; i++){
        int r;
        string name;
        cout << i+1 << ">> ";
        cin >> r;
        getline(cin, name);
        if (r <= 0){
            cout << "�ٽ� �Է��ϼ���" << '\n';
            i--;
            continue;
        }
        c[i].set(r, name);
    }
    cout << "���� ������ ū ���ڴ� " << biggest(c,5) << "�Դϴ�." << '\n';
    return 0;
}