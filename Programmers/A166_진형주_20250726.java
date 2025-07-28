class Solution {
    public int solution(String t, String p) {
        int length = t.length() - p.length() + 1;
        long pNum = Long.parseLong(p);
        int answer = 0;
        
        for (int i = 0; i < length; i++) {
            String temp = t.substring(i, i + p.length());   
            
            if (Long.parseLong(temp) <= pNum) {
            	answer++;
            }
        }
        return answer;
    }
}
/*
생각정리
문자열을 입력받은 후, p의 길이만큼의 부분문자열 인덱스 0부터 배열에 나열한다.
배열의 요소 중 p보다 작은 원소들이 나올 때마다 result ++;하여 나중에 result를 출력한다.
*/