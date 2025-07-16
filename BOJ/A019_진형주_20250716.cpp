#include <iostream>
#include <string>
#include <map>

using namespace std;

int main(){

    int a, b, c;
    cin >> a >> b >> c;
    int total = a * b * c;
    map<char, int> digit_count;

    string s = to_string(total);

    for(char c : s){
        if(c>= '0' && c <= '9')
            digit_count[c]++;
    }

    for(char d = '0'; d<='9'; d++){
        cout << digit_count[d] << endl;
    }
    return 0;
}

/*
생각정리

세 개의 수를 입력받아서 모두 곱하고, 0부터 1까지 몇개가 쓰였는지를 구하는 문제이다
알고리즘:
문자를 string으로 바꾸어서, string의 길이만큼 for문을 하고, map으로 0부터 9까지 생성하고,
각각 몇개 들어있는지 value값을 구한다.
*/