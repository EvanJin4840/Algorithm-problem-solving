import java.util.*;

class Solution {
    public boolean lemonadeChange(int[] bills) {

        Map<String, Integer> map = new HashMap<>();
        map.put("5", 0);
        map.put("10", 0);
        map.put("20", 0);
        int cur;

        for(int i = 0 ; i< bills.length; i++){
            if(bills[i]==5){
                cur = map.get("5");
                map.put("5", cur+1);
            }
            else if(bills[i]==10){
                if(map.get("5")==0){
                    return false;
                }
                cur = map.get("5");
                map.put("5", cur-1);
                cur = map.get("10");
                map.put("10", cur+1);
            }
            else{
                    if(map.get("10") > 0 && map.get("5") > 0){
                    cur = map.get("10");
                    map.put("10", cur - 1);
                    cur = map.get("5");
                    map.put("5", cur - 1);
                }
                else if(map.get("5") >= 3){
                    cur = map.get("5");
                    map.put("5", cur - 3);
                }
                else {
                    return false;
                }
            }
        }
        return true;

    }
}

/*
생각정리
5달러와 10달러를 20달러를 받을 때마다 보유하고 있는 지폐의 개수를 증가시킨다.
1.만약 손님이 5달러를 낼 경우: 보유하고 있는 5달러의 개수를 1개 증가시킨다.
2.만약 손님이 10달러를 낼 경우: 보유하고 있는 10달러의 개수를 1개 증가시키고 5달러의 개수를 1개 감소시킨다.
3.20달러를 낼 경우 10달러와 5달러를 각각 1개씩 감소시킨다. 
만약 2,3의 경우를 수행할 충분한 양의 5달러나 10달러의 개수가 없다면, false를 return한다.
 */