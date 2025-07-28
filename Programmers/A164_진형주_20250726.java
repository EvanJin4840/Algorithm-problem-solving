import java.util.*;

class Solution {
    public int[] solution(String s) {
        int[] answer = new int[s.length()];
        Map<Character, Integer> lastpos = new HashMap<>();
        
        for(int i = 0 ; i < s.length(); i++){
            char current = s.charAt(i);
            
            if(lastpos.containsKey(current)){
                answer[i] = i - lastpos.get(current);
            }
            else{
                answer[i] = -1;
            }
            
            lastpos.put(current, i);
        }
        return answer;
    }
}

/*
생각정리
Hashmap을 사용하여 각 문자의 길이를 갱신하여서 풀기
*/