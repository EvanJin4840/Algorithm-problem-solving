#include <iostream>

using namespace std;

bool isascending(int arr[]){
    for(int i = 0 ; i < 7 ; i++){
        if(arr[i]>arr[i+1])
            return false;
    }
    return true;
}
bool isdescending(int arr[]){
    for(int i = 0 ; i < 7 ; i++){
        if(arr[i]<arr[i+1])
            return false;
    }
    return true;
}

int main(){
    int flag = 0; //0은 mix, 1은 오름차순, -1은 내림차순
    int arr[8] = {};
    for(int i = 0 ; i < 8 ; i++){
        cin >> arr[i];
    }
    if(isdescending(arr)){
        cout << "descending" << endl;
    }
    else if(isascending(arr)){
        cout << "ascending" << endl;
    }
    else{
        cout << "mixed" << endl;
    }
    return 0;
}

