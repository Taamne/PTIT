import java.io.File;
import java.io.FileNotFoundException;
import java.util.Scanner;

public class J07004_sukhacnhautrongfile {
    public static void main(String[] args) throws FileNotFoundException {
        File f = new File("DATA.in");
        Scanner ip = new Scanner(f);
        int[] cnt = new int[100005];
        while (ip.hasNext()) {
            int x = ip.nextInt();
            cnt[x]++;
        }
        for (int i = 0; i <= 1000; i++) {
            if (cnt[i] > 0) {
                System.out.println(i + " " + cnt[i]);
            }
        }
    }
}