class Solution {
    public long solution(int price, int money, int count) {
        long answer = -1;
        long total = 0 ;
        for(int i = 1 ; i <= count ; i ++){
            total+=i*price;
        }
        answer = total-money;
        if(answer<=0){
            return 0;
        }
        else{
        return answer;
        }
    }
} 
/*
생각정리
n번 이용하면 1+2*price+3*price+..+이런식으로 더해내고, 그 금액에서 money를 뺀 값을 출력한다. 
*/