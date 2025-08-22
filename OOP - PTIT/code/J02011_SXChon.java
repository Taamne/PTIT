import java.util.ArrayList;
import java.util.Collections;
import java.util.List;
import java.util.Scanner;

public class J02011_SXChon {
    public static List<Integer> a = new ArrayList<>();

    public static void Test(int n){
        int pos, x;
        System.out.printf("Buoc 0: %d\n",a.get(0) );
        for (int i=1; i<n; i++){
            pos=i;
            x=a.get(i);
            while (pos >0 && x<a.get(pos-1)){
            a.set(pos, a.get(pos-1));
            pos--;
            }
            a.set(pos, x);

            System.out.printf("Buoc %d: ",i );

            for (int j=0; j<=i; j++){
                System.out.print(a.get(j)+ " ");
            }
            System.out.println();
        }

    }
    public static void main(String[] args) {
        Scanner ip= new Scanner(System.in);
        int n = ip.nextInt();
        for (int i=0; i<n; i++){
            int x = ip.nextInt();
            a.add(x);
        }
        Test(n);
    }
}
