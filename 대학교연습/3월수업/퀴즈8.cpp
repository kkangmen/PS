// 1. �Ҹ����� ����
//    : ���� �޸𸮸� ����
//    : ���� ����, �ݱ�
//    : ��Ʈ��ũ(N/W) �ݱ�
// 2. �Ҹ��� ���� 
//     : ~circle(){...}
// 3. ������ ���� �ʴ��� �ý��ۿ����� �ڵ����� �⺻�Ҹ��� ����
//     -> �ڵ����� �Ҹ��� ����

// ����������
// 1. private
// 2. public
// 3. protected(inheritance)

#include <iostream>

using namespace std;

class Oval{
private:
    int width, height;
    double getArea();
public:
    Oval() {width = height = 1;}
    Oval(int w, int h) {width = w; height = h;}
    ~Oval() {cout << "Oval �Ҹ� : "; show();}
    int getWidth() {return width;}
    int getHeight() {return height;}
    void set(int w, int h);
    void show();
};
double Oval::getArea(){
    return 3.14*width*height;
}
void Oval::set(int w, int h){
    width = w;
    height = h;
}
void Oval::show(){
    cout << "width = " << width << ", height = " << height << " Area " << getArea() << '\n';
}
int main(){
    Oval a, b(3,4);
    a.set(10, 20);
    a.show();
    b.show();
    return 0;
}