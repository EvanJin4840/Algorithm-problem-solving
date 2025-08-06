class Solution {
    public boolean isPerfectSquare(int num) {
        long start = 1;
        while(true){
            if(start*start == num){
                return true;
            }
            else if(start*start>num){
                return false;
            }
            start+=1;
        }
    }
}
/*
생각정리
먼저 이전 방법과 같이 제곱수를 구한다.
대신 더 크거나 하지 않고 제곱근이 정수면 true를 retrun한다.(==0일 때 )
*/