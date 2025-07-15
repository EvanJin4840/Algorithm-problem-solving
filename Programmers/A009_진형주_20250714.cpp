#include <iostream>
#include <string>
#include <cctype>

using namespace std;

// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
bool solution(string s) {
    //if (s == nullptr) return false;
    bool answer = false;
    if(s.size()==4||s.size()==6){
        for(char c : s) {
        if(c < '0' || c > '9') return false;
    }
        answer = true;
    }
    return answer;
}

/*
생각정리
1. 먼저 길이가 4 또는 6인지 확인하는 과정을 거친다. 그냥 복사해서 string으로 바꾸면 될듯하다
2. 문자열이 숫자로만 이루어져 있는지 확인한다. 
3. 1이나 2 중 하나만 false 여도 false return한다. 
*/