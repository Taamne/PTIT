import java.util.*;

public class J02006 {
    public static void main(String[] args) {
        Scanner ip = new Scanner(System.in);
        int n = ip.nextInt();
        int m = ip.nextInt();
        int[] a= new int[n];
        int[] b = new int[m];
        int[] map= new int[1005];
        for(int i = 0 ; i<n ; i++){
            a[i] = ip.nextInt();
            map[a[i]]++;


        }
        for(int i = 0; i<  m; i++){
            b[i]= ip.nextInt();
            map[b[i]]++;

        }





        for(int i = 1; i<=1000; i++){
            if(map[i]!=0){
                System.out.print(i+" ");
            }
        }


    }
}
