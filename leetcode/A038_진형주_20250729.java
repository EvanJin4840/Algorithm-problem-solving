class Solution {
    public int mySqrt(int x) {
        long start = 1;
        while(true){
            if(start*start > x){
                return (int)(start-1);
            }
            start+=1;
        }
    }
}