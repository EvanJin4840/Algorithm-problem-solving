#include <string>
#include <vector>

using namespace std;

bool solution(int x) {
    bool answer = false;
    int total = 0 ;
    int change = x;
    
    while(change !=0){
        total += change%10;
        change /= 10;
    }
     
    if(x%total==0){
        answer = true;
    }
    
    return answer;
}

/*
생각정리
자릿수를 %로 계속 나눈 것을 total에 더하고, 
입력받은 수는 /10으로 계속 하고, 반복문을 끝내는 조건은 변하는 값이 0일때로 설계한다.
변하는값 /10이 0이 아닌 조건이 아니라 변하는 값 change 자체가 0이 아닐 때까지 반복하는 것을 헷갈리지 않도록 하자
*/