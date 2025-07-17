import java.util.Scanner;

public class J01013_TongUocSo1 {
    public static int prime[] = new int[2000006];


    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int t = input.nextInt();
        for(int i = 0; i<= 2000000; i++)
            prime[i]=0;
            prime[1]=prime[0]=1;
        for(int i = 2; i<= 2000; i++) {
            if (prime[i] == 0) {
                for (int j = i * i; j <= 200000; j += i) {
                    if (prime[j] == 0) {
                        prime[j] = i;

                    }

                }

            }
        }
        for(int j=2; j<=2000000; j++){
            if(prime[j]==0){
                prime[j]=j;
            }
        }
        int res=0;

        while(t-- >0){
            int n = input.nextInt();
            while (n>1) {
                res += prime[n];
                n /= prime[n];
            }
        }
        System.out.println(res);

    }
}
