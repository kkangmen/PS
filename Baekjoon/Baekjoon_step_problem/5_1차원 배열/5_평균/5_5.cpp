#include <iostream>

using namespace std;

int main(){
    int num_of_subject; // ������ ����
    cin >> num_of_subject;

    float score[num_of_subject] ={}; // �� ������ ���� �迭 ����
    // �� ������ ���� �迭 ����
    for (int i = 0; i < num_of_subject; i++){
        cin >> score[i];
    }

   int score_max = 0; // ������ �ִ�
   for (int i = 0; i < num_of_subject; i++){
        if(score_max < score[i]){
            score_max = score[i];
        }
   }
    //cout << score_max << endl;

   float new_score_sum = 0; // ���ο� ���� ������ ��
   for (int i = 0; i < num_of_subject; i++){
        score[i] = score[i]/score_max*100;
        new_score_sum += score[i];
   }

//    for (int i = 0; i < num_of_subject; i++){
//         cout << "score �迭" << score[i] << endl;
//    }
//    cout << new_score_sum << endl;

   cout << new_score_sum / num_of_subject << endl;
    return 0;
}