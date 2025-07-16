#include <iostream>

using namespace std;

int main(){

    int n, tmp;
    int total = 0;

    cin >> n;

    for(int i = 1 ; i < n+1 ; i ++){
        cin >> tmp;
        if(i!=n)
        {
            total += tmp;
            total -= 1;
        }
        else
            total +=tmp;
        
    }
    
    cout << total;

    return 0;
}

/*
몇개의 멀티탭을 꽃을 수 있는지를 구하는 문제이다.
1번째 부터 N번째 멀티탭에서, N번째가 아닌 멀티탭은 각각 -1을 해야한다. 그런 값을 모두 더한다.

*/