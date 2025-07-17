import java.lang.reflect.Array;
import java.util.Scanner;

public class J02004 {

    public static boolean check(int a[], int n){
        for(int i=1; i<= n/2; i++){
            if(a[i] !=  a[n-i+1]) return false;
        }
        return  true;
    }
    public static void main(String[] args) {
        Scanner ip= new Scanner(System.in);
        int t = ip.nextInt();
        while (t-- >0){
            int n = ip.nextInt();
            int[] a = new int[n+5];
            for(int i = 1; i<= n; i++){
                a[i]= ip.nextInt();}

                if(check(a,n)) System.out.println("YES");
                else System.out.println("NO");


        }
    }
}
