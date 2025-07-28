import java.util.*;

class Solution {

    private int toDays(String date){
        String[] p = date.split("\\.");
        int y = Integer.parseInt(p[0]); 
        int m = Integer.parseInt(p[1]);
        int d = Integer.parseInt(p[2]);
        return (y * 12 + m) * 28 + d;
    }

    public int[] solution(String today, String[] terms, String[] privacies) {
        Map<String, Integer> termMap = new HashMap<>();
        for (String t : terms){
            String[] parts = t.split(" ");
            termMap.put(parts[0], Integer.parseInt(parts[1]));
        }

        int todayDays = toDays(today);  
        List<Integer> expired = new ArrayList<>();

        for (int i = 0; i < privacies.length; i++){
            String[] parts = privacies[i].split(" ");
            int collectedDays = toDays(parts[0]);      
            int termMonths    = termMap.get(parts[1]);
            int expireDays = collectedDays + termMonths * 28 - 1;

            if (expireDays < todayDays){
                expired.add(i + 1);
            }
        }

        int[] answer = new int[expired.size()];
        for (int i = 0; i < expired.size(); i++){
            answer[i] = expired.get(i);
        }
        return answer;
    }
}