import java.util.Scanner;

public class J01007_KtraSoFibo {
        public static long[] f = new long[105];


        public static void fibo() {
            f[1] = 1;
            f[2] = 1;
            for (int i = 3; i <= 100; i++) {
                f[i] = f[i - 1] + f[i - 2];

            }
        }
    public static int Test(long n) {

        for (int i = 1  ; i <= 100; i++) {
            if(f[i] == n) return 1;
            if(f[i] > n) return 0;
        }
        return 0;
    }



        public static void main(String[] args) {
            Scanner scanner = new Scanner(System.in);
            int t = scanner.nextInt();
            fibo();
            for (int i = 0; i < t; i++) {

                long n = scanner.nextLong();
                if(Test(n) == 1) System.out.println("YES");
                else System.out.println("NO");

            }
        }

}
