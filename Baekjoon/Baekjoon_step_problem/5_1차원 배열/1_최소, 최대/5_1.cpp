// #include <iostream>

// using namespace std;

// int main(void){
//     int num_of_int; // ������ ����
//     cin >> num_of_int; // ������ ���� �Է�
//     int num_array[num_of_int]; // ������ ������ ���̸�ŭ �迭 ����

//     for (int i = 0; i < num_of_int; i++){
//         cin >> num_array[i]; // �迭�� ������ ����
//     }

//     int max = num_array[0]; // �ִ�
//     int min = num_array[0]; // �ּڰ�

//     for (int i = 1; i < num_of_int; i++){ // �ּڰ��� ���ϴ� �˰���
//         if (min > num_array[i]){
//             min = num_array[i];
//         }
//     }

//     for (int i = 1; i < num_of_int; i++){ // �ִ��� ���ϴ� �˰���
//         if (max < num_array[i]){
//             max = num_array[i];
//         }
//     }
//     cout << min << " " << max << endl;

//     return 0;
// }