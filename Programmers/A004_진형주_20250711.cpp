#include <string>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> solution(vector<int> arr, int divisor) {
    vector<int> answer;
    bool isempty = false;
    for(int temp : arr){
        if(temp%divisor==0){
            answer.push_back(temp);
        }
    }
    sort(answer.begin(), answer.end());

    if(answer.empty()){
        answer.push_back(-1);
    }
    return answer;
}