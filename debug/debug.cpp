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
	cout << "���� ���� >> ";
	cin >> circle;

	Circle *pArray = new Circle[circle];
	for (int i = 0; i < circle; i++){
		int radius;
		cout << "�� " << i+1 << "�� ������ >> ";
		cin >> radius;
		pArray[i].setRadius(radius);
	}

	int count = 0;
	for (int i = 0; i < circle; i++){
		if (pArray[i].getArea()>100){
			count++;
		}
	}
	cout << "������ 100���� ū ���� " << count << "�� �Դϴ�." << '\n';
	return 0;
}