import java.util.ArrayList;
import java.util.Collections;
import java.util.List;
import java.util.Scanner;

public class J02010 {
    public static List<Integer> a = new ArrayList<>();

    public static void Test(int n){
        for (int i=0; i<n-1; i++){
            for (int j=i+1; j<n; j++){
                if(a.get(i) > a.get(j)) Collections.swap(a,i,j);
            }
            System.out.printf("Buoc %d: ",i+1 );

            for (int j=0; j<n; j++){
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
