import java.util.*;

class Solution {
    public boolean halvesAreAlike(String s) {
        String a, b; 
        int acon =0 , bcon =0;
        List<Character> c, d= new ArrayList<Character>();
        ArrayList<Character> vowel = new ArrayList<>(Arrays.asList('a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U'));
        a=s.substring(0, s.length()/2);
        b=s.substring(s.length()/2);
        for(int i = 0 ; i < a.length();i++){
            if(vowel.contains(a.charAt(i))){
                acon++;
            }
            if(vowel.contains(b.charAt(i))){
                bcon++;
            }
        }
        if(acon==bcon){
            return true;
        }
        return false;
    }
}

/*
생각정리
1. 먼저 두개의 string으로 나누고, 각각의 크기만큼의 배열을 생성한다.
2. 모음 포함된 개수 acont, bcont를 각각 계산하고, acont와 bcont가 다르면 false return한다.
 */