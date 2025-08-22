import java.util.Scanner;

public class J01012_TongUocSo1 {
    public  static int Phantich(long n){
        int res =0;
        for(int i = 2; i<= Math.sqrt(n); i++){

                    while (n % i == 0) {
                        n /= i;
                        res += i;

                    }


        }
        if(n!=1) res +=n;
        return res;
    }

    public static void main(String[] args) {
        Scanner ip= new Scanner(System.in);
        int t = ip.nextInt();
        int res=0;
        while(t-- >0){
            long n = ip.nextLong();
            res+= Phantich(n);

        }
        System.out.println(res);
    }

}
