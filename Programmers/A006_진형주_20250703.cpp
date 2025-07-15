#include <string>
#include <iostream>
#include <cctype>
#include <algorithm>

using namespace std;

bool solution(string s)
{
    bool answer = true;
    int pnum =0 , ynum = 0;
    // [실행] 버튼을 누르면 출력 값을 볼 수 있습니다.
    //cout << "Hello Cpp" << endl;
    
    //transform(s.begin(), s.end(), s.begin(), tolower);
    transform(s.begin(), s.end(), s.begin(), [](unsigned char c){ return tolower(c); });

    for(char c : s){
        if(c=='p'){
            pnum++;
        }
        else if(c=='y'){
            ynum++;
        }
    }
    if(pnum!=ynum)
        answer = false;
    
    return answer;
}