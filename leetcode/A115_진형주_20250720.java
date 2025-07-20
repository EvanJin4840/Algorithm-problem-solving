/*package leetcode;

public class A115_진형주_20250720 {
    public static void main(String[] args) {
        
    }
}*/
//아래는 leet코드 사이트에서 정상 동작한 코드입니다. 
class Solution {
    public int maxNumberOfBalloons(String text) {
        //Scanner s = new Scanner(System.in);
        Map<Character, Integer> map = new HashMap<>();
        char[] keys = {'b','a', 'l', 'o', 'n'};
        for(char key : keys){
            map.put(key, 0);
        }
        String input = text;
        //input = s.nextLine();

        for(int i =0 ; i<input.length(); i++){
            char ch = input.charAt(i);

            if(map.containsKey(ch)) {
                map.put(ch, map.get(ch) + 1);
            }
        }
        map.put('l', map.get('l')/2);
        map.put('o', map.get('o')/2);
        int min = Collections.min(map.values());
        //System.out.println("최솟값: " + min);
        //s.close();
        return min;
    }
    
    /*public static void main(String[] args){
    
    }*/
}

/*
생각정리
우선 문장을 입력받는다
입력받은 후, ballon의 문자에 해당하는 문자가있으면 추가한다.
'b', 'a', 'l', 'l', 'o', 'n'을 map같은 것을 사용하여 저장하고, 
이 모든 숫자의 개수가 모두 최소 1개이상이라면 1이고, 모두 2 이상이라면 2이다. map에서 value값의 최솟값을 구하고 출력하면 해결할 수 있다.
*/
