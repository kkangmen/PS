#include <iostream>
#include <array>

using namespace std;

int main(){
    array<int, 9> num_array; // ���̰� 9�� �迭 ����
    
    for (int i = 0; i < num_array.size(); i++){
        cin >> num_array[i];
    } // �迭�� ���� ����

    int max_index; // �ִ��� �ε����� ������ ����
    int max = num_array[0]; // max�� num_array�� 0��°�ε����� ����
    for (int i = 1; i < num_array.size(); i++){
        if (max < num_array[i]){// max������ ū���� ���� ��� �ֽ�ȭ
            max = num_array[i];
            max_index = i; // �ִ��� �͵����� ����
        }
    }
    cout << max << endl; // �ִ� ���
    cout << max_index + 1 << endl; // �ִ��� �ε��� ���
   
    return 0;
}