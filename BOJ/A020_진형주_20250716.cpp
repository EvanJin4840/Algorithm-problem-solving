#include <iostream>

using namespace std;

int main(){

    int num1, num2;//num1은 내린 사람, num2는 탄 사람을 의미한다.
    int total = 0;
    int max = 0 ;

    for(int i =0 ; i < 4 ; i ++){
        cin >> num1 >> num2;
        total += num2 - num1;
        if(total > max){
            max = total;
        }
    }
    cout << max;

    return 0;
}

/*
생각정리
가장 많은 은 사람이 타고 있을 때의 사람수를 구해야 한다.
내린 사람이 모두 내린 후 , 탈 사람이 탄다고 하자
1번역 2번역 3번역 4번역을 모두 저장한 후,
1번을 우선 max로 해놓고, 뒤에서 더 많은 사람이 타는 것을 본다면, 그것을 max로 바꾸는 형식으로 코딩해보자

*/
