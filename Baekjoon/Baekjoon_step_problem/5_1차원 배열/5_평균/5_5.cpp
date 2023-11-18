#include <iostream>

using namespace std;

int main(){
    int num_of_subject; // 과목의 개수
    cin >> num_of_subject;

    float score[num_of_subject] ={}; // 각 과목의 점수 배열 생성
    // 각 과목의 점수 배열 대입
    for (int i = 0; i < num_of_subject; i++){
        cin >> score[i];
    }

   int score_max = 0; // 과목의 최댓값
   for (int i = 0; i < num_of_subject; i++){
        if(score_max < score[i]){
            score_max = score[i];
        }
   }
    //cout << score_max << endl;

   float new_score_sum = 0; // 새로운 과목 점수의 합
   for (int i = 0; i < num_of_subject; i++){
        score[i] = score[i]/score_max*100;
        new_score_sum += score[i];
   }

//    for (int i = 0; i < num_of_subject; i++){
//         cout << "score 배열" << score[i] << endl;
//    }
//    cout << new_score_sum << endl;

   cout << new_score_sum / num_of_subject << endl;
    return 0;
}