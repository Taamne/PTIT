import java.util.ArrayList;
import java.util.Collections;
import java.util.List;
import java.util.Scanner;

public class J02013 {
    public static List<Integer> a = new ArrayList<>();

    public static void Test(int n) {
        int cnt = 1;
        for (int i = 0; i < n ; i++) {
            boolean swap = false;

            for (int j = 0; j <n-i-1; j++)
                if (a.get(j) > a.get(j + 1)) {
                    Collections.swap(a, j, j + 1);
                    swap = true;
                }

            if (swap) {
                System.out.printf("Buoc %d: ", cnt);

                for (int j = 0; j < n; j++) {
                    System.out.print(a.get(j) + " ");
                }
                System.out.println();
            cnt++;
            }

        }

    }
    public static void main(String[] args) {
        Scanner ip= new Scanner(System.in);
        int n = ip.nextInt();
        for (int i=0; i<n; i++){
            int x = ip.nextInt();
            a.add(x);
        }
        Test(n);
    }
}
