import java.util.*;

public class J02007 {
    public static void main(String[] args) {
        Scanner ip = new Scanner(System.in);
        int t = ip.nextInt();
        int cnt=1;
        while (t-- >0) {

            int n = ip.nextInt();
            int[] a = new int[n];
            int[] map = new int[100005];
            for (int i = 0; i < n; i++) {
                a[i] = ip.nextInt();
                map[a[i]]++;


            }
            System.out.printf("Test %d:\n", cnt);



            for (int i = 0; i < n; i++) {
                if (map[a[i]] != 0) {
                    System.out.printf("%d xuat hien %d lan \n", a[i], map[a[i]]);
                    map[a[i]] = 0;
                }
            }
            cnt++;
        }


    }
}
