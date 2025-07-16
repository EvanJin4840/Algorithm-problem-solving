#include <iostream>

using namespace std;

int main(){

    int N, temp, m = 0, y = 0;
	cin >> N;
 
	for (int i = 0; i < N; i++) {
		cin >> temp;
		y += (temp / 30 + 1) * 10;
		m += (temp / 60 + 1) * 15;
	}
	if (m < y) cout << "M " << m;
	else if (m > y) cout << "Y " << y;
	else if (m == y) cout << "Y M " << m;

    return 0;
}

/*
생각정리
30초당 10원, 60초당 15원식 청구되는 요금제중 어느 것이 더 저렴한지를 출력하는 문제이다
0. 0초 ~ 29초 -> 영식 요금제가 더 저렴
1. 30초부터 59초 사이 -> 민식 요금제가 더 저렴

*/