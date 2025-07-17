import java.util.ArrayList;
import java.util.List;
import java.util.Scanner;

public class J02034 {
    public static void main(String[] args) {
        Scanner ip= new Scanner(System.in);
        List<Integer> a = new ArrayList<>();
        List<Integer> b = new ArrayList<>();

        int n = ip.nextInt();
        int min = 205, max = -205;
        for (int i=0; i<n; i++){
            int x = ip.nextInt();
            a.add(x);

        }
        max = a.get(n-1);
        min= a.get( 0);
        for (int i = 1; i<=max; i++){
            if(!a.contains(i)){
                b.add(i);
            }
        }
        if (!b.isEmpty()) {
            for (int i : b) {
                System.out.println(i);
            }
        }
        else System.out.println("Exellent!");

    }
}
