import java.util.Scanner;

class Main{

    public static void main(String[] args) {
        Scanner s = new Scanner(System.in);
        int arr[] = new int[1000];

        int n = 1;
        int cnt = 0;
        int a, b;
        for (int i = 0; i< 1000; i++){
            if(cnt == n){
                n++;
                cnt = 1;
                arr[i] = n;
            }
            else { 
                cnt++;
                arr[i] = n;
            }
        }
        a = s.nextInt();
        b = s.nextInt();

        int sum = 0;

        for(int i = a-1 ; i < b; i++)
            sum+=arr[i];
            
        System.out.println(sum);

        s.close();
    }
}

/*
생각정리

1, 22, 333이런식으로 증가하는 수열에서 A번째부터 B번째까지의 합을 구해보자
위와 같은 수열에서 B까지합에서 A-1번째 합까지를 빼면 된다.
그렇다면 1, 22, 333이런식으로 증가하는 수열의 합을 구하기 위해 배열을 만들고 초기화시켜주자
*/