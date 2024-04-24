#include <iostream>
#include <string>
using namespace std;

class Circle{
private:
    int radius;
public:    
    Circle(){radius = 1;}
    Circle(int r){radius = r;}
    void setRadius(int r){radius = r;}
    int getRadius(){return radius;}
    double getArea(){return 3.14*radius*radius;}
};

class Sample{
private:
    Circle *p;
    int capacity;
    int size;
public:
    Sample(int n){
        capacity = n;
        p = new Circle[n];
    }
    void read(){
        cin >> size;
        for (int i = 0; i < size; i++){
            int num;
            cin >> num;
            p[i].setRadius(num);
        }
    }
    int getSize(){
        return size;
    }
    void write(){
        for (int i = 0; i < size; i++){
            cout << p[i].getRadius() << ' ';
        }
    }
    Circle big(){
        int max = p[0].getRadius();
        for (int i = 1; i < size; i++){
            if (max < p[i].getRadius()){
                max = p[i].getRadius();
            }
        }
        Circle cir(max);
        return cir;
    }
};
int main(){
    Sample s(10);
    s.read();
    cout << "각 원 객체의 반지름 " << s.getSize() << "개를 출력합니다." << '\n';
    s.write();
    Circle big = s.big();
    cout << "가장 큰 원의 넓이: " << big.getArea() << "\t가장 큰 원의 반지름: " << big.getRadius() << '\n';
}