#include <iostream>

using namespace std;

int divide(int x, int y)
{
    if (x % y == 0)
    {
        return y;
    }
    return divide(y, x % y);
}

int main(){
    int A, B, t;
    int common_max = 0;
    cin >> t;

    for(int i = 0 ; i < t ; i++){
    cin >> A >> B;
 
    if (A >= B)
    {
        common_max=divide(A, B);
    }
    else common_max=divide(B, A);

    cout << A * B / common_max << endl;
}
    return 0;
}

/*
최소공배수를 구하는 함수 findLCM을 만들자.
*/