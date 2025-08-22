import java.util.Scanner;

public class J02101 {
    public static void main(String[] args) {
        Scanner ip = new Scanner(System.in);
        int t = ip.nextInt();
        while (t-- >0){
            int[][] a= new int[105][105];
            int n = ip.nextInt();

            for (int i =0; i<n; i++){
                for (int j=0; j<n; j++){
                    a[i][j]= ip.nextInt();

                }
            }
            for (int i=0; i<n; i++){
                if (i %2 ==0){
                    for (int j=0; j<n; j++){
                        System.out.print(a[i][j]+" ");
                    }
                }
                else {
                    for (int j=n-1; j>=0; j--){
                        System.out.print(a[i][j]+" ");
                    }
                }
            }
            System.out.println();
        }
    }
}
