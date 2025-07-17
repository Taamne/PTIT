import java.util.Scanner;

public class J01001_HinhChuNhat {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int a = input.nextInt();
        int b = input.nextInt();
        if(a<= 0 || b<=0) System.out.println(0);
        else {


            long p = 2 * (a + b);
            long s = a * b;
            System.out.print(p + " " + s);
        }
    }
}
