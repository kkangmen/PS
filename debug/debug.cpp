#include <iostream>

using namespace std;

void sizeArray(int a[], int size){
	int size_func;

	size_func = sizeof(a)/sizeof(a[0]);

	cout << "���޵� �Լ��� size�� : " << size_func << '\n';
}

int main(){
	int n[] = {1, 2, 3, 4, 5};

	int size;

	size = sizeof(n)/sizeof(n[0]);

	cout << "�Լ��� size�� : " << size <<'\n';

	sizeArray(n, size);

	return 0;
}