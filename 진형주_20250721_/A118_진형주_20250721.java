import java.util.ArrayList;
import java.util.Arrays;
import java.util.List;

public class A118_진형주_20250721 {
    class Solution {
    public void moveZeroes(int[] nums) {
        int tomove = 0;
        List<Integer> others = new ArrayList<>();
        int countToMove = 0;
        for (int n : nums){
            if(n == tomove){
                countToMove++;
            } else {
                others.add(n);
            }
        }

        int index = 0;
        for(int num : others){
            nums[index++] = num;
        }
        for (int i = 0 ; i < countToMove ; i++){
            nums[index++] = tomove;
        }

        System.out.println(Arrays.toString(nums));
    }
}
}
