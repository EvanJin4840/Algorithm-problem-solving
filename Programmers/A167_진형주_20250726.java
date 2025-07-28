class Solution {
    public int solution(int[] number) {
        int cnt = 0;
        for (int i = 0; i < number.length-2; i++){
            for (int j = i+1; j < number.length-1; j++){
                for (int k = j+1; k < number.length; k ++){
                    if(number[i] + number[j] + number[k] == 0){
                        cnt +=1;
                    }
                }
            }
        }
        return cnt;
    }
}
/*
생각정리
중첩 반복문을 활용하여 모든 경우의 수를 확인한다.
*/