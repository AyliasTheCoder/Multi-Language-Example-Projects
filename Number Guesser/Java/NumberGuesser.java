import java.io.IOException;
import java.io.BufferedReader;
import java.io.InputStreamReader;

public class NumberGuesser {

    public static void main(String[] args) throws IOException {
        System.out.println("Think of a number between 1 and 1000");

        int top = 1000;
        int bottom = 0;

        int count = 0;
        while (true) {
            int guess = (Integer)Math.round((top + bottom) / 2);
            count++;

            System.out.println("My guess is " + guess);
            System.out.println("Was I correct? (h if your number is higher, l if its lower, and c if it is correct)");
            BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
            String correct = br.readLine().replace("\n", "");
            
            if (correct.contains("h")) {
                bottom = guess;
            } else if (correct.contains("l")) {
                top = guess;
            } else if (correct.contains("c")) {
                System.out.println("I guessed your number in " + count + " guesses!");
                break;
            } else {
                System.out.println("I didn't understand, please try again!");
                count--;
            }
        }
    }
}