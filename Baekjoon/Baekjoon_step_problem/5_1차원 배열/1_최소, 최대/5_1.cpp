// #include <iostream>

// using namespace std;

// int main(void){
//     int num_of_int; // 정수의 개수
//     cin >> num_of_int; // 정수의 개수 입력
//     int num_array[num_of_int]; // 정수의 개수의 길이만큼 배열 생성

//     for (int i = 0; i < num_of_int; i++){
//         cin >> num_array[i]; // 배열에 정수를 대입
//     }

//     int max = num_array[0]; // 최댓값
//     int min = num_array[0]; // 최솟값

//     for (int i = 1; i < num_of_int; i++){ // 최솟값을 구하는 알고리즘
//         if (min > num_array[i]){
//             min = num_array[i];
//         }
//     }

//     for (int i = 1; i < num_of_int; i++){ // 최댓값을 구하는 알고리즘
//         if (max < num_array[i]){
//             max = num_array[i];
//         }
//     }
//     cout << min << " " << max << endl;

//     return 0;
// }