#include <iostream>

using namespace std;

int main(){

    int n, i;

    cin >> n;
    if(n == 1) return 0;

    while(true){
        for(i = 2; i<=n;i++){
            if(n%i==0){
                cout << i << endl;
                if(i==n)    return 0;
                n/=i;
                break;
            }
        }
    }
    return 0;
}

/*
소인수분해 결과를 한 줄에 하나씩 오름차순으로 출력하는 문제
소수인 2, 3, 5, 7, 11, 13, 17, ...으로 나누어지는지 확인하고 나누어지면 
출력하고, 다시 소수로 나누는 과정을 처음부터 반복한다.
*/