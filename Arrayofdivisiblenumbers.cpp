/* 문제출처: https://school.programmers.co.kr/learn/courses/30/lessons/12910 
A001
생각정리
먼저 나누는 자연수인, divisor를 입력 받습니다.
만약 배열의 요소를 divisor로 나누었을 때, 나누어 떨어진다면, vector answer에 원소를 추가합니다. 마지막에 배열의 element가 있는지 없는지 확인하고 없다면, 배열에
-1을 담도록 코딩합니다. 
*/
#include <string>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> arr, int divisor) {
    vector<int> answer;
    bool isempty = false;
    for(int temp : arr){
        if(temp%divisor==0){
            answer.push_back(temp);
        }
    }
    sort(answer.begin(), answer.end());

    if(answer.empty()){
        answer.push_back(-1);
    }
    return answer;
}

int main(){
    int divisor;
    vector<int> arr;
    arr.push_back(5);
    arr.push_back(9);
    arr.push_back(7);
    arr.push_back(10);
    cin >> divisor;
    arr = solution(arr, divisor);
    for(int temp : arr){
        cout << temp << endl;
    }
    
    return 0;
}