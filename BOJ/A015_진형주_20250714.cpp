#include <iostream>
#include <vector>
//검증수 문제
using namespace std;

int main(){
    vector<int> a;
    int tmp;
    int total =0 ;
    for(int i =0 ; i < 5; i ++){
        cin >> tmp;
        a.push_back(tmp);
    }
    for(int t : a){
        total += t*t;
    }

    total %=10;
    cout << total << endl;
    return 0;
}

/*
생각정리
처음 5개의 수를 입력받을 때, 각각의 수를 10000, 1000, 100, 10으로 %한 값을 구하고 그 값들을
모두 제곱하여 더한 후 1-으로 나눈 값을 출력하도록 한다. 
*/