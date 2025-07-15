#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <unordered_map>
using namespace std;

int main(){
    int roomnum;
    unordered_map<int, int> map;

    cin >> roomnum;

    string s = to_string(roomnum);

    vector<int> count(10, 0);

    for(char c : s) {
        int d = c - '0';
        count[d]++;
    }
    int sixnine = count[6] + count[9];
    count[6] = count[9] = (sixnine + 1) / 2;

    int answer = 0;
    for(int i = 0; i < 9; i++) {
        if(count[i] > answer) answer = count[i];
    }
    cout << answer << endl;
    return 0;
    
}

/*
생각정리
6과 9는 뒤집어서 사용할 수 있으므로 문자 1개로 취급한다. 입력받은 다솜이의 방 번호 중 9는 모두 6으로
취급한다 그러나, 한 세트에서 6은 두개 있다.
그 이후로, 중복되는 숫자의 개수만큼이 필요한 세트 개수의 최솟값이라고 볼 수 있다.

알고리즘은 다음과 같이 적용한다.
1. 9라는 숫자가 있다면 모두 6으로 바꾼다
2. 중복되는 숫자가 있는지 체크한다.
2_1. 만약 중복되는 숫자가 6이라면, 6의 중복되는 개수 +1/2로 나눈 값 만큼의 세트 수가 필요한 것이다.
2_2. 6이 아닌 숫자의 중복되는 개수를 모두 구한다.
3. 구한 중복되는 숫자 중 가장 큰 수가 필요한 세트의 개수의 최솟값이다.
과정 3을 수행할 때, map을 사용하므로, 가장 큰 수와 , 두번째로 큰 수를 구한다.
첫번째 수가 6일 때는, 6의 중복된 개수 +1의 값을 2로 나눈 값과 두번째로 큰 수 중 더 큰 수를 출력값으로 정한다. 
replace(digits.begin(), digits.end(), 9, 6);

    for(int x: digits){
        map[x]++;
    }

    int max1_key = -1;
    int max2_key = -1;

    int max1 = -1;//최댓값
    int max2 = -1;//두번째 최댓값

    for (const auto& pair : map) {
        int val = pair.second;
        int key = pair.first;

        if (val > max1) {
            max2 = max1;
            max2_key = max1_key;
            max1 = val;
            max1_key = key;
        } else if (val > max2 && val < max1) {
            max2 = val;
            max2_key = key;
        }
    }

    if(max1_key==6){
        if((max1+1)/2>max2){
            cout << (max1+1)/2;
        }
    }
    else
        cout << max1;

    return 0;

    논리수정 : 
    vector에 입력된 숫자 각각을 저장하면서 +1을 추가한다. 
    6과 9는 합쳐서 계산하고 +1한 후 /2한 값을 저장한다. 마지막에 9를 빼고 가장 큰 수를 출력한다.
*/