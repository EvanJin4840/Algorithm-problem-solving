import java.util.Scanner;

class Main{
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int N = sc.nextInt();
        sc.nextLine();
        String tmp;
        for(int i = 0 ; i < N ; i ++){
            tmp=sc.next();
            System.out.println(findresult(tmp));
        }
    }
    static int findresult(String a){
        boolean conse = false;
        int result = 0;
        int howconse = 0;
        for(int i =0 ; i <a.length();i++){
            if(a.charAt(i)=='X'){
                conse = false;
                howconse = 0;
            }
            else{
                conse = true;
                howconse ++;
                result += howconse;
            }
        }

        return result;
    }
}

/*
생각 정리 
O가 연속으로 나오면 연속으로 나온만큼 수를 더해야 한다.
현재 O인지 확인하는 변수 boolean conse를 설정하자
그리고 현재 점수를 계산하는 int result를 설정하자
만약 O가 나오면 CONSE가 TRUE가 되고, X가 나오는 순간 다시 FALSE다
true인 동안에는 int now가 1부터 시작하고 2 3 4 이런식으로 증가한다. 
*/