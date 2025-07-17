import java.util.Scanner;

public class J01009_TongGiaiThua {
    public  static Scanner input = new Scanner(System.in);

    public static void Test(){
        int n = input.nextInt();
        long res =0, s = 1;
        for(int i =1; i<=n; i++){
            s*=i;
            res+=s;
        }
        System.out.println(res);
    }

    public static void main(String[] args) {
        Test();
    }
}
