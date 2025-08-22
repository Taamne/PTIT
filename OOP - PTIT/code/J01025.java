import java.util.Scanner;

public class J01025 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int x, y, x1 = -2000, y1 = -2000, x2 = 2000, y2 = 2000;
        for (int i =1 ; i <= 4; ++i){
            x = sc.nextInt();
            y = sc.nextInt();
            x1 = Math.max(x1, x);
            x2 = Math.min(x, x2);
            y1 = Math.max(y1, y);
            y2 = Math.min(y, y2);
        }
        int k = Math.max(x1 - x2, y1 - y2);
        System.out.println(k * k);
    }
}
