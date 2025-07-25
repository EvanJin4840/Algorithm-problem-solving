import java.util.*;

class Main{
    public static void main(String[] args) {
        Scanner s = new Scanner(System.in);
        ArrayList<Integer> numbers = new ArrayList<>(); 
        int a, tmp, total = 0;
        a = s.nextInt();

        for(int i = 0 ; i < a ; i ++){
            tmp = s.nextInt();
            if(tmp == 0){
                numbers.remove(numbers.size()-1);
            }
            else{
                numbers.add(tmp);
            }
        }
        for(int i = 0 ; i < numbers.size() ; i ++){
            total += numbers.get(i);
        }
        System.out.println(total);
    }
}

/*
생각정리
처음 입력값을 받는다.
for문으로 다음 과정을 반복한다
0이 아니면 추가한다. 0이라면 이전 수를 Arraylist에서 지운다.
최종적으로 모든 수를 더하고 출력한다.
 */