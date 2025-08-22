import java.util.Scanner;

public class J01006_TinhSoFibo {
    public static long[] f = new long[105];

    public static void Test() {
        f[1] = 1;
        f[2] = 1;
        for (int i = 3; i <= 93; i++) {
            f[i] = f[i - 1] + f[i - 2];

        }
    }

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int t = scanner.nextInt();
        Test();
        for (int i = 0; i < t; i++) {

            int n = scanner.nextInt();
            System.out.println(f[n]);
        }
    }
}