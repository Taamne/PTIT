import java.util.Scanner;

public class J01022 {
    public static void main(String[] args) {
        long[] f = new long[95];
        f[1]=1;
        f[2]=1;
        for(int i=3; i<=93; i++){
            f[i]= f[i-1]+f[i-2];
        }
        Scanner ip = new Scanner(System.in);
        int t = ip.nextInt();
        while(t-->0){
            int n = ip.nextInt();
            long  k = ip.nextLong();
            while (n>0){
                if(n==1 || n==2) {


                    if (n == 1) System.out.println(0);
                    else if (n == 2) System.out.println(1);
                    break;
                }
                if( k > f[n-2]){
                    k-=f[n-2];
                    n-=1;
                }
                else n-=2;

            }
        }
    }
}
