class Solution {
    public int addDigits(int num) {
        String sum="";
        sum = String.valueOf(num);
        Integer count = 0;
        while(sum.length()>1){
            count = 0;
            for(int i = 0 ; i < sum.length(); i++){
                count += sum.charAt(i)-'0';
            }
            sum=count.toString();
        }
        int finals = Integer.valueOf(sum);
        return finals;
    }
}

/*
생각정리
먼저 입력받은 정수를 string으로 변환하고, string의 길이가 1이 될때까지 다음 과정을 반복한다
1. 각각의 string의 모든 char을 int로 변경하고 더한다. 더한 후, 다시 string으로 만든다.
만약 string의 길이가 1이 된다면 멈춘다.
 */