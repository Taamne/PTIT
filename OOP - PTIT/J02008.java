import java.util.Scanner;

public class J02008 {
    public static long gcd(long a, long b) {
        long tmp;
        while (b != 0){
            tmp=a%b;
            a=b;
            b=tmp;
        }
        return a;
    }
    public static void main(String[] args) {
        Scanner ip = new Scanner(System.in);
        int t = ip.nextInt();
        while(t-- >0){
            int n = ip.nextInt();
            long res =1;

            for(int i=2; i<=n; i++){
                res = (res * i) / gcd(res,i);
            }
            System.out.println(res);
        }
    }
}
