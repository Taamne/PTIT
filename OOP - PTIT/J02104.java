import java.util.Scanner;

public class J02104 {
    public static void main(String[] args) {
        Scanner ip= new Scanner(System.in);
        int n = ip.nextInt();
        int[][] a = new int[n+5][n+5];
        for (int i =0; i<n; i++){
            for (int j =0; j<n; j++){
                a[i][j]= ip.nextInt();

            }
        }
        for (int i=0; i<n; i++){
            for (int j=i; j<n; j++){
                if(a[i][j] == 1){
                    System.out.printf("(%d,%d)\n",i+1, j+1);
                }
            }
        }
    }
}
