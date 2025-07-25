import java.util.*;

class Main{
    public static void main(String[] args) {
        Scanner s = new Scanner(System.in);
        int n, max = 0;
        String tmp, result = null;
        Map<String, Integer> book = new HashMap<>();
        n = s.nextInt();
        s.nextLine();
        for(int i = 0 ; i < n ; i ++){
            tmp = s.nextLine();
            if(book.containsKey(tmp)){
                book.put(tmp, book.get(tmp)+1);
            } else{
                book.put(tmp, 1);
            }
        }
        for(Map.Entry<String, Integer> entry : book.entrySet()){
            if(entry.getValue() > max){
                max = entry.getValue();
                result = entry.getKey();
            }
        }
        for(Map.Entry<String, Integer> entry : book.entrySet()){
            if(entry.getValue() == max){
                if(entry.getKey().compareTo(result) < 0){
                    result = entry.getKey();
                }
            }
        }
        System.out.println(result);
    }
}

/*
생각정리
처음 팔린 책의 개수 N을 입력받는다.
둘째부터 책의 제목이 입력으로 들어온다. 
map에 저장한 후, 가장 많이 팔린 책을 출력하는데, 여러개일경우엔 사전순으로 출력한다.
*/