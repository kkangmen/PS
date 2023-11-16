#include <iostream>
#include <array>

using namespace std;

int main(){
    array<int, 9> num_array; // 길이가 9인 배열 생성
    
    for (int i = 0; i < num_array.size(); i++){
        cin >> num_array[i];
    } // 배열에 숫자 대입

    int max_index; // 최댓값의 인덱스를 저장할 변수
    int max = num_array[0]; // max를 num_array의 0번째인덱스로 지정
    for (int i = 1; i < num_array.size(); i++){
        if (max < num_array[i]){// max값보다 큰값이 있을 경우 최신화
            max = num_array[i];
            max_index = i; // 최댓값의 익덱스를 저장
        }
    }
    cout << max << endl; // 최댓값 출력
    cout << max_index + 1 << endl; // 최댓값의 인덱스 출력
   
    return 0;
}