import java.util.Scanner;

public class J02103 {
    public static void main(String[] args) {
        Scanner ip = new Scanner(System.in);
        int t= ip.nextInt();
        for (int cnt =1; cnt<= t; cnt++){

            int n= ip.nextInt();
            int m = ip.nextInt();
            int[][] a = new  int[105][105];
            int[][] b = new  int[105][105];
            int[][] c = new  int[105][105];

            for (int i=0; i<n; i++){
                for (int j=0; j<m; j++){
                    a[i][j]= ip.nextInt();
                }
            }
            for (int i=0; i<n; i++){
                for (int j=0; j<m; j++){
                    b[j][i]= a[i][j];
                }
            }
            System.out.printf("Test %d:\n",cnt);
            for (int i=0; i<n; i++) {
                for (int j =0; j<n; j++){
                    int sum=0;

                    for (int k=0; k<m; k++)
                    sum+= a[i][k]*b[k][j];
                    c[i][j]=sum;
                }

            }
/*
            for (int i=0; i<m; i++){
                for (int j=0; j<n; j++){
                    System.out.print(b[i][j]+" ");
                }
                System.out.println();
            }
            */
            for (int i=0; i<n; i++){
                for (int j=0; j<n; j++){
                    System.out.print(c[i][j]+" ");
                }
                System.out.println();
            }

        }
    }
}
