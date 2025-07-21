#include <iostream>
using namespace std;

int dp[1000001]; // 1 ~ 1000000까지 최소 연산 횟수 저장 배열

int main() {
    int X;
    cin >> X;
    dp[1] = 0;

    // 2부터 X까지 차례로 최소 연산 횟수를 계산
    for(int i = 2; i <= X; i++) {
        // 한 번 1을 빼는 연산
        dp[i] = dp[i-1] + 1;

        // i가 2로 나누어 떨어지면 2로 나누는 방법과 비교
        if(i % 2 == 0)
            dp[i] = min(dp[i], dp[i/2] + 1);

        // i가 3으로 나누어 떨어지면 3으로 나누는 방법과 비교
        if(i % 3 == 0)
            dp[i] = min(dp[i], dp[i/3] + 1);
    }

    cout << dp[X] << endl;
    return 0;
}