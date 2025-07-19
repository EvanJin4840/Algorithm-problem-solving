#include <iostream>
#include <vector>
#include <string>
#include <iomanip>
#include <sstream>

using namespace std;

double marsmath(string a){
    double total = 0;
    double temp;
    istringstream iss(a);

    double val;
    iss >> val;
    total += val;
    char op;

    while(iss >> op) {
        if(op=='@'){
            total = total *3;
        }
        else if(op=='%'){
            total = total +5;
        }
        else if(op=='#'){
            total = total - 7;
        }
        else{
            temp = op - '0';
            total += temp;
        }
    }
    return total;
}

int main(){

    int N;
    vector<string> a;
    string input;
    cout << fixed;
    cout.precision(2);
    cin >> N;
    cin.ignore();
    
    /*while(true){
        getline(cin, input);
        if(input.empty())   break;

        a.push_back(input);
    }*/
    for(int i =0 ; i < N ; i++){
        getline(cin, input);
        a.push_back(input);
    }

    for(int i = 0 ; i<a.size(); i++){
        cout << marsmath(a[i]) << endl;
    }

    return 0;
}

/*
생각정리
N개의 string을 입력받자, 그 각각의 string의 연산자들을 문자 단위로 for문으로 구분하여 화성 수학의 연산자로 변경한다.

*/