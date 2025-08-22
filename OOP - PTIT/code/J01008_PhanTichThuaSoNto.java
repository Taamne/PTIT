import java.util.Scanner;

public class J01008_PhanTichThuaSoNto {
    public static long n;

    public static void Test() {
        for (int i = 2; i <= Math.sqrt(n); i++) {
            if (n % i == 0) {
                int dem = 0;
                while (n % i == 0) {
                    dem++;
                    n /= i;
                }

                System.out.printf("%d(%d) ", i, dem);

            }
        }
        if(n!= 1) System.out.printf("%d(%d)", n,1);
    }

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int t = scanner.nextInt();
        for (int i = 1; i <= t; i++) {
            n = scanner.nextLong();
            System.out.print("Test " + i + ": ");
            Test();
            System.out.println();

        }
    }
}
