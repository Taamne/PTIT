import java.math.BigInteger;
import java.util.Scanner;

public class J03033  {
    public static void main(String[] args) {
        Scanner ip = new Scanner(System.in);
        int t = ip.nextInt();
        ip.nextLine();
        while (t-- >0){
            BigInteger a = new BigInteger(ip.nextLine());
            BigInteger b = new BigInteger(ip.nextLine());
            BigInteger res = a.multiply(b);
            System.out.println(res.divide(a.gcd(b)));
        }
    }
}
