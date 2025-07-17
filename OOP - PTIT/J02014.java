import java.util.Scanner;

public class J02014 {

    public static void main(String[] args) {
        Scanner ip = new Scanner(System.in);
        int t=ip.nextInt();
        while (t-- >0){


            int n = ip.nextInt();
            int sum =0;
            int[] a = new int[100005];
            for (int i=0; i<n; i++){
                a[i] =  ip.nextInt();
                sum+= a[i];
            }
            sum-=a[0]; //7
            boolean check=false;
            int sum2=0;
            for (int i =1; i<n-1; i++) {
                sum2 += a[i - 1];//-7
                sum = sum - a[i]; //6
                if (sum == sum2) {
                    System.out.println(i + 1);
                    check=true;
                }

            }
            if (!check){
                System.out.println(-1);
            }
        }
    }
}
