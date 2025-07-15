#include <iostream>
#include <vector>

using namespace std;

double getaverage(int n, vector<int> b){
    int total=0;
    for (int temp : b){
        total+=temp;
    }
    double avg = total*1.0/b.size();
    return avg;
}

int main(){
    int test;
    int size;
    int temp;
    double avg;
    cin >> test;
    for(int j = 0 ; j < test ; j++){
    vector<int> a;
    cin >> size;
    for(int i = 0 ; i < size ; i++){
        cin >> temp;
        a.push_back(temp);
    }
    avg = getaverage(size, a);
    int total = 0;
    for(int tmp : a){
        if(tmp>avg){
            total++;
        }
    }
    double percent = total * 100.0/size;
    //avg = total*1.0/avg*100;
    printf("%.3f%%\n", percent);
    }

    return 0;
}
/*
생각정리
입력:

가장 첫째 줄에는 입력을 몇번 받을지가 주어짐.
두번째로는 학생의 수 N이 주어지고, 이어서 N명의 점수가 주어짐. 점수는 0이상 100이하인 정수임

출력 각 케이스마다 한 줄씩 평균을 넘는 학생들의 비율을 반올림하여 소수점
셋째 자리까지 출력함

문제풀이:
무한반복문 while안에서
vector를 생성하여, 입력받은 수 크기 size만큼 반복문을 돌리고 입력된 값들을
vector에 넣습니다. 그리고 함수 getaverage를 생성하여 
average를 return 받고, for each문으로 평균을 넘는 학생들의 수를 벡터의 사이즈로
나누고 소수점셋째 자리까지 출력한다. 
*/