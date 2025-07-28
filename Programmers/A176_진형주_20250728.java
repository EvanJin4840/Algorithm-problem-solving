class Solution {
    public int solution(int n) {
        int answer = 0;
        for(int i = 2 ; i < n ; i ++){
            if(n%i==1){
                answer = i;
                break;
            }
        }
        
        return answer;
    }
}

/*
생각정리
우선 2부터 시작하여서 n보다 작은 범위 안에서 나누는 숫자를 증가시키고, 나머지가 1인지 확인합니다
나머지가 1이라면 그 수를 return합니다.
*/