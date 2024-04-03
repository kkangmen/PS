#include <iostream>

using namespace std;

class Circle{
private:
	int radius;
public:
	void setRadius(int radius){this->radius = radius;}
	double getArea(){return radius*radius*3.14;}
};

int main(){
	int circle;
	cout << "원의 개수 >> ";
	cin >> circle;

	Circle *pArray = new Circle[circle];
	for (int i = 0; i < circle; i++){
		int radius;
		cout << "원 " << i+1 << "의 반지름 >> ";
		cin >> radius;
		pArray[i].setRadius(radius);
	}

	int count = 0;
	for (int i = 0; i < circle; i++){
		if (pArray[i].getArea()>100){
			count++;
		}
	}
	cout << "면적이 100보다 큰 원은 " << count << "개 입니다." << '\n';
	return 0;
}