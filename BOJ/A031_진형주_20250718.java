import java.util.Scanner;

class Main {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        long n = sc.nextInt();

        long m = sc.nextInt();

        long count = 0;

        count = m * n -1;
        System.out.println(count);
    }
}