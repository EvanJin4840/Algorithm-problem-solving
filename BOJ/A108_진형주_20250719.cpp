#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

bool ispalindrome(int a){
    string s = to_string(a);
    string rev= s;
    reverse(rev.begin(), rev.end());
    int total = stoi(rev);
    total = total + a;
    s = to_string(total);
    int left = 0;
    int right = s.length() - 1;
    while(left < right){
        if(s[left]!=s[right])   return false;
        left++;
        right--;
    }
    return true;
}

int main(){

    int N;
    int temp;
    vector<int> a;

    cin >> N;

    for(int i = 0 ; i < N ; i++){
        cin >> temp;
        a.push_back(temp);
    }

    for(int i = 0 ; i < a.size(); i ++){
        if(ispalindrome(a[i])){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }
    return 0;
}

/*
팔린드롬인지 알아내는 함수 ispalindrome 생성하고, 입력받는대로 함수 사용하기
string을 사용하여 palindrome 인지 알아보자
left보다 right가 더 클 때까지 왼쪽부터 오른쪽으로 오른쪽부터 왼쪽으로 각각 오게 하고 다르면 false
를 return한다.
*/