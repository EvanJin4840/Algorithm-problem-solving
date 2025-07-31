#include <iostream>
using namespace std;

int apt[15][15];

int main(){
  int t; 
  cin >> t;
  
  while(t--){
    int k, n; 
    cin >> k >> n;
      
    for (int i=0; i <= k; i++){
        for (int j=1; j <= n; j++){
            if (i == 0) {
                apt[0][j] = j;
            }
            else if (j == 1){
                apt[i][1] = 1;
            }
            else {
                apt[i][j] = apt[i][j-1] + apt[i-1][j];
            } 
        }
    }
    cout << apt[k][n] << "\n";
  }
}
/*
생각정리
0층에는 1호 1명 2호 2명 3호 3명이다.
1층에는 1호 1명, 2호 3명, 3호 6명이다.
2층에는 1호 1명, 2호 4명, 3호 10명이다.
-> apt[i][j] = apt[i][j-1] + apt[i-1][j]; 공식
*/