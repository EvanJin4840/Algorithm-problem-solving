class Solution {
    public boolean isPowerOfFour(int n) {
        if(n<=0){
            return false;
        }
        while(true){
            if(n==1){
                return true;
            }
            else{
                if(n%4==0){
                    n=n/4;
                }
                else{
                    return false;
                }
            }
        }
    }
}
/*
4의 제곱수 판단하기
n%4==0이면 계속 나눈다.
나누다가 1이 나오면 참이다. 
단, n 이 1인 경우엔 그냥 참이다.
 */
