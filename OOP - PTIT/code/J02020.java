import java.util.Scanner;

public class J02020 {
    public static void main(String[] args) {
        Scanner ip = new Scanner(System.in);
        int n = ip.nextInt();
        int k = ip.nextInt();
        int[] a = new  int[1005];
        for (int i=1; i<=k; i++){
            a[i]= i;

        }
        int ok=1, cnt=0;

        while (ok==1){
            for (int j=1; j<=k; j++){
                System.out.print(a[j]);
            }
            cnt++;
            System.out.print(" ");
            int i=k;

            while (i>0 && a[i]== n-k+i) {
                i--;
            }
            if(i==0 ){
                ok=0;

            }
            else {
                a[i]++  ;
                i++;
                for (int j=i; j<=k; j++){
                    a[j]= a[j-1]+1;
                }
            }

        }
        System.out.println("\nTong cong co "+cnt+" to hop");
    }
}
