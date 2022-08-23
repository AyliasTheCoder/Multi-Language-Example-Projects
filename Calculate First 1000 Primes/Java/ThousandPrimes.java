import java.util.ArrayList;
import java.util.Arrays;
import java.util.List;

public class ThousandPrimes {

  public static void main(String[] args) {
    ArrayList<Integer> primes = new ArrayList<>(Arrays.asList(2, 3, 5, 7, 11));

    int i = 12;
    while (primes.size() < 1000) {
      if (isPrime(i)) {
        primes.add(i);
      }
      i++;
    }

    for (var x : primes) {
      System.out.println(x);
    }
  }

  public static boolean isPrime(int number) {
    int[] check = new int[]{2, 3, 5, 7, 11};

    for (var x : check) {
      if (number % x == 0) return false;
    }

    return true;
  }
}
