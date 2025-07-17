import java.util.Scanner;

public class J01026 {

    public static void main(String[] args) {
        Scanner ip= new Scanner(System.in);
        int t= ip.nextInt();
        while (t-- >0) {


            long n = ip.nextLong();
            long can = (long) Math.sqrt(n);
            if (can * can == n) System.out.println("YES");
            else System.out.println("NO");
        }

    }
}

