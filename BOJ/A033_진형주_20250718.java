import java.util.Scanner; 
import java.util.ArrayList;
import java.util.List;
class Main{

    public static void main(String[] args) {
        List<Integer> arr = new ArrayList<>();
        Scanner s = new Scanner(System.in);
        Integer total =0 , temp = 0;
        for(int i = 0 ; i < 5; i ++){
            total = 0;
            for(int j = 0 ; j < 4 ; j++){
                temp = s.nextInt();
                total += temp;
            }
            arr.add(total);
        }
        int max = 0;
        for(int i =1 ; i < arr.size() ; i++){
            if(arr.get(max) < arr.get(i)){
                max = i;
            }
        }
        System.out.println(max+1+" "+arr.get(max));
    }
}

/*
1번부터 5번 참가자까지 네 개의 평가 점수가 공백으로 주어짐
각각을 arraylist에 저장한 후, 가장 큰 값과 max index를 함께 출력한다.

*/