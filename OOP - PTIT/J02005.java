import java.util.Arrays;
import java.util.LinkedHashSet;
import java.util.Scanner;
import java.util.Set;

public class J02005 {
    public static void main(String[] args) {
        Scanner ip = new Scanner(System.in);
        int n = ip.nextInt();
        int m = ip.nextInt();
        int[] a= new int[n];
        int[] b = new int[m];
        for(int i = 0 ; i<n ; i++){
            a[i] = ip.nextInt();

        }
        for(int i = 0; i<  m; i++){
            b[i]= ip.nextInt();

        }

       Arrays.sort(a);
        Arrays.sort(b);

      Set<Integer> se = new LinkedHashSet<>();
        int i=0;
        int j=0;
        while(i<n && j<m){
            if(a[i] <b[j]){
                i++;
            }
            else if(a[i]> b[j]){
                j++;
            }
            else {
                 se.add(a[i]);
                 i++;
                 j++;
            }
        }

        for(int x:se){
            System.out.print(x + " ");
        }


    }
}
