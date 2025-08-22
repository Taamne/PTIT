import java.util.Scanner;

public class J02106 {
    public static void main(String[] args) {
        Scanner ip = new Scanner(System.in);
        int n= ip.nextInt();
        int[][] a = new int[n+5][5];
        for (int i=0; i<n; i++){
            for (int j=0; j<3; j++){
                a[i][j]= ip.nextInt();

            }
        }
        int res=0;
        for (int i=0; i<n; i++){
            int cnt=0;
            for (int j=0; j<3; j++){
                if(a[i][j] ==1) cnt++;
                else cnt--;

            }
            if (cnt >0) res++;
        }
        System.out.println(res);
    }
}
