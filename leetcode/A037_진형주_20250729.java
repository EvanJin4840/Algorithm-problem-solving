import java.util.ArrayList;
import java.util.List;

class Solution {
    public List<Integer> selfDividingNumbers(int left, int right) {
        ArrayList<Integer> result = new ArrayList<>();
        for(int i = left; i <= right; i++){
            if(isSelfDividing(i))
                result.add(i);
        }
        return result;
    }
    
    boolean isSelfDividing(int num) {
        int original = num;
        
        while(num > 0) {
            int digit = num % 10;
            
            if(digit == 0 || original % digit != 0) {
                return false;
            }
            
            num = num / 10;
        }
        return true;
    }
}
/*
self dividing number구하기
left부터 right까지의 정수 중 self dividing numbers를 찾는 문제,
self dividing numbers인지 판단해주는 함수 boolean isdividing을 만들자
*/