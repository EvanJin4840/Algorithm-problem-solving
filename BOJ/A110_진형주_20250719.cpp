#include <iostream>

using namespace std;

int main(){

    int N, current;
    int total = 0;
    cin >> N;

    N = 1000-N;

    total += N/500;
    current = N%500;

    total += current/100;
    current = current%100;

    total += current/50;
    current = current%50;
    
    total += current/10;
    current = current%10;

    total += current/5;
    current = current%5;

    total +=current;

    cout << total;


    return 0;
}

/*
거스름돈 문제
1000엔 - 입력받은 수 N을 하고, 
그 다음부터 다음 과정을 반복한다.
먼저 그 수를 500으로 나눈 몫을 구한다. 그 몫을 total에 더한다
그 후, 나머지를 다시 100으로 나누어 몫을 구하고 그 몫을 total에 더한다.
그 과정을 반복하고 50엔을 끝낸 후 %의 값은 그냥 total에 더하고 출력한다.
*/