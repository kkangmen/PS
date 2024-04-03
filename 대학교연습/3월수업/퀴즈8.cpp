// 1. 소멸자의 목적
//    : 동적 메모리를 삭제
//    : 파일 저장, 닫기
//    : 네트워크(N/W) 닫기
// 2. 소멸자 형식 
//     : ~circle(){...}
// 3. 선언을 하지 않더라도 시스템에서는 자동으로 기본소멸자 생성
//     -> 자동으로 소멸자 실행

// 접근지정자
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
    ~Oval() {cout << "Oval 소멸 : "; show();}
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