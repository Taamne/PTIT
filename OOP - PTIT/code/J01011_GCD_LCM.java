import java.util.Scanner;

public class J01011_GCD_LCM {

    public static long GCD(long a, long b){
        long r=a%b;
        while(r != 0){
             a=  b;
            b=r;
            r=a%b;
        }
        return b;
    }
    public static long LCM(long a, long b){
        long m = GCD(a,b);
        return a * b / m;
    }

    public static void main(String[] args) {

        Scanner ip = new Scanner(System.in);
        int t = ip.nextInt();
        while (t-- > 0) {


            long a = ip.nextLong();
            long b = ip.nextLong();
            System.out.println( LCM(a,b) +" " + GCD(a,b));


        }
    }
}
