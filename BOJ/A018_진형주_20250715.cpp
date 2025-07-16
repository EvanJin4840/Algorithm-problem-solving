#include <iostream>
#include <map>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int n;
    int temp;
    vector<int> va;
    vector<int> vb;

    cin >> n;
    for(int i = 0 ; i < n ; i++){
        cin >> temp;
        va.push_back(temp);
    }
    for(int i = 0 ; i < n ; i++){
        cin >> temp;
        vb.push_back(temp);
    }
    sort(va.begin(), va.end());
    sort(vb.begin(), vb.end(), greater<>());
    int res = 0;
    for(int i = 0 ; i < n ; i++){
        res+= va[i] * vb[i];
    }
    cout << res;

    return 0;
}

/*
생각정리
배열 A의 순서를 재배열하여, 최솟값을 출력하도록 한다.
첫째 줄에 N이 주어지고, 둘째 줄에는 A에 있는 N개의 수가 순서대로 주어진다.
최솟값이 되게 하는 방법
b가 가장 작은 것에는 a가 가장 큰 것을 곱해야 한다.
b가 가장 큰 것에는 a가 가장 작은 것을 곱해야 한다.
map을 활용하여 b의 값들을 key값으로 하고, value값을 큰 값부터 차례대로 정렬시키자.
b의 value값은 1이 가장 큰 수라고 하고, a는 정렬할 때, 가장 작은 수를 1이라고 해서 value가 1인 곳에 
a의 value값이 1인 것을 매칭시키자. 그리고 계산한 값 S를 출력하자.

## 논리수정: 굳이 A를 재배열할 필요가 없음 -> 그냥 최솟값만 구하면 됨.
그러므로 a는 오름차순, b는 내림차순으로 변경하고 그냥 각각을 차례대로 곱하자.
*/