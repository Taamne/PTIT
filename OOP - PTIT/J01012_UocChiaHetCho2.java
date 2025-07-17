import java.util.Scanner;

public class J01012_UocChiaHetCho2 {
    public static Scanner ip = new Scanner(System.in);

    public static void Test(){
        long n = ip.nextLong();
        int cnt =0;
        if(n %2 ==0) cnt++;
        if(Math.sqrt(n) * Math.sqrt(n) == n && Math.sqrt(n) %2==0) cnt--;

        for(int i = 2; i<= Math.sqrt(n); i++){
            if(n % i ==0 ){
                if(i % 2 ==0){
                    cnt++;
                }
                long x = n/i;
                if(x % 2 ==0){
                    cnt++;
                }

            }

        }
        System.out.println(cnt);

    }

    public static void main(String[] args) {
        int t = ip.nextInt();
        while(t-- > 0){
            Test();
        }
    }
}
