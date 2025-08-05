import java.util.*;

class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String input;
        input = sc.nextLine();
        StringBuilder result = new StringBuilder();

        for (int i = 0; i < input.length(); i++) {
            char c = input.charAt(i);

            if (Character.isUpperCase(c)) { 
                char shifted = (char) (c - 3);
                if (shifted < 'A') {
                    shifted += 26; 
                }
                result.append(shifted);
            } else if (Character.isLowerCase(c)) {
                char shifted = (char) (c - 3);
                if (shifted < 'a') {
                    shifted += 26;
                }
                result.append(shifted);
            } else {
                result.append(c); 
            }
        }

        System.out.println(result);
        sc.close();
    }
}
