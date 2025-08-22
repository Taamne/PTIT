import java.util.Locale;
import java.util.Scanner;

public class J01014 {
    public static int isPrime(long n) {
        if (n < 2) return 0;
        for (int i = 2; i <= Math.sqrt(n); i++) {
            if (n % i == 0) return 0;

        }
        return 1;
    }

    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int t = input.nextInt();
        while (t-- > 0) {
            long res = 0;
            long n = input.nextLong();
            if (isPrime(n)==1) System.out.println(n);
            else {
                for (int i = 2; i <= Math.sqrt(n); i++) {
                    if (n % i == 0) {
                        long k = n / i;
                        if (isPrime(i)==1) res = Math.max(res, i);
                        if (isPrime(k)==1) res = Math.max(res, k);


                    }
                }
                System.out.println(res);

            }
        }
    }
}
