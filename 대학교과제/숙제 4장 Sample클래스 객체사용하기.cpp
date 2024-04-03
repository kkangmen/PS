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
    void read();
    void write();
    Circle big();
    int getSize(){return size;}
    ~Sample(){delete[]p;}
};

void Sample::read(){
    cout << "�Է��ҷ��� ���� ������ ? ";
    int num;
    int input;
    cin >> num;
    size = num;
    cout << size << "���� ���� �������� �Է��Ͻÿ� ";
    for (int i = 0; i < size; i++){
        cin >> input;
        p[i].setRadius(input);
    }
}
void Sample::write(){
    for (int i = 0; i < size; i++){
        cout << p[i].getRadius() << ' ';
    }
    cout << '\n' << '\n';
}
Circle Sample::big(){
    int max = p[0].getRadius();
    for (int i = 1; i < size; i++){
        if (max < p[i].getRadius()){
            max = p[i].getRadius();
        }
    }
    Circle cir(max); //�������� max�� Circle Ŭ���� ������ ����
    return cir; // ��ü cir�� �����Ѵ�.
}
int main(){
    Sample s(10);
    s.read();
    cout << "�� �� ��ü�� ������ " << s.getSize() << "���� ����մϴ�.";
    s.write();   
    Circle big = s.big();
    cout << "���� ū ���� ����: " << big.getArea() << "\t���� ū ���� ������: " << big.getRadius() << '\n';

    return 0;
}