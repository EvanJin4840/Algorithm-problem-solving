import java.util.Scanner;

class Main {
	public static void main(String[] args) {
		Scanner s = new Scanner(System.in);
		long N = s.nextLong();
		int door[] = new int[6];

		int zero = s.nextInt();
		door[0] = zero;
		int temp = zero;
		for(int i=1; i<5; i++) {
			door[i] = 1-zero;
			zero = 1-zero;
		}
		if (N >= 6) {
			System.out.println("Love is open door");
		}else {
			for(int i=1; i<N; i++) {
				System.out.println(door[i]);
			}
		}
	}

}