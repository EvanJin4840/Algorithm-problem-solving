#include <iostream>

using namespace std;

int operation(int a){
    int cnt = 0;
    if(a<100){
        return a;
    }
    else{
        cnt = 99;
        for(int i = 100 ; i<=a;i++){
            int hun = i/100;
            int ten = (i/10)%10;
            int one = i%10;

            if((hun-ten) == (ten - one)){
                cnt++;
            }
        }
    }
    return cnt;
}

int main(){
    int N;
    cin >> N;
    int count = operation(N);
    cout << count << endl;
    return 0;
}

/*
생각정리
어떤 양의 정수 x의 각 자리가 등차수열을 이루면 한수라고 한다.
1보다 크거나 같고, N보다 작거나 같은 한수의 개수를 출력하는 프로그램
특정 수를 10으로 더이상 나눌 수 없을 떄까지 반복하고, 나눌 때마다 나오는 값들을
vector에 저장한 후, vector의 원소들을 통해서 등차수열인지 확인하는 알고리즘을
만들어보자.
참고로 1부터 99까지는 모두 등차수열이고,
나머지 수들은 두 항의 차이를 비교하여 등차수열인지 확인하면 된다.
*/