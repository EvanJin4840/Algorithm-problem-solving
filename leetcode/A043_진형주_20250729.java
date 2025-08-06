class Solution {
    public boolean checkRecord(String s) {
        long count = s.chars().filter(ch -> ch == 'A').count();
        if (count >= 2)
            return false;
        else{
            int conse = 0;
        for (int i = 0; i < s.length(); i++) {
            if (s.charAt(i) == 'L'){
                conse++;
                 if(conse >=3) return false;
                }
                else{
            conse = 0;
            }
            } 
        }
    return true;
    }
}

/**
생각정리
java 8 stream과, 반복문으로 패턴을 검사하는 방법을 사용하여 해결해보자
*/