import java.util.Scanner;
import java.util.ArrayList;

class Main{
    static ArrayList<Integer> arrl = new ArrayList<>();
    static Scanner s = new Scanner(System.in);
    public static void main(String[] args) {
        boolean flag = false;
        int[] arr = new int[10];
        for(int i = 0 ; i < 10 ; i++){
            arr[i] = s.nextInt();
        }
        for(int i = 0 ; i < 10 ; i ++){
            arr[i]= arr[i]%42;
        }
        arrl.add(arr[0]);
        for(int i = 1 ; i < 10 ; i ++){
            flag = false;
            for(int j = 0 ; j<arrl.size(); j++){
                if(arr[i] == arrl.get(j)){
                    
                }
            }
        }
    }
}

/*
생각정리
숫자 10개를 입력받고, 42로 나눈 나머지를 구하는데, 서로 다른 값이 몇개인지 출력하는 프로그램을 작성하자
크기가 10인 Array를 생성하고, 각각의 값을 42로 나눈 값으로 array의 값을 바꾼다. 
그 후, 새로운 arraylist를 생성하여, for문과 if문을 돌려서, 만약 arraylist안의 원소 중 중복되는 것이 없으면
arraylist에 추가하고, 마지막에 arraylist의 size값을 출력하고 끝낸다.
*/