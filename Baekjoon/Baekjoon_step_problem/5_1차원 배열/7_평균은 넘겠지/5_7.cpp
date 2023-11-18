#include <iostream>

using namespace std;

int avg(int[] , int);
double develop_testcase(int);

int main(){
    int T;
    cin >> T;

    for (int i = 0; i < T; i++){
        cout.precision(5);
        cout << develop_testcase(T) << "%" << endl;
    }
    return 0;
}

double develop_testcase(int T){
    int per;
    cin >> per;

    int score_arr[per]= {};
    for (int i = 0; i < per; i++){
        cin >> score_arr[i];
    }

    int average = avg(score_arr, per);
    //cout << "average: " << average << endl;

    int count = 0;
    for (int i = 0; i < per; i++){
        if (average < score_arr[i]){
            count++;
        }
    }

    return static_cast<double>(count)/ per * 100;
}

int avg(int score_arr[], int per){
    double sum = 0;
    for (int i = 0; i < per; i++){
        sum += score_arr[i];
    }

    return sum / per;
}