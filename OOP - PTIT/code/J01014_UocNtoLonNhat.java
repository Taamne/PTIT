import java.util.Scanner;

public class J01014_UocNtoLonNhat {
    public static int check(long n){
        if(n < 2) return 0;
        for(int i =2; i<= Math.sqrt(n); i++){
            if(n%i == 0 ) return 0;

        }
        return 1;
    }

    public static void main(String[] args) {
        Scanner ip = new Scanner(System.in);
        int t = ip.nextInt();
        while(t-- > 0){
            long res = 0;
            long  n = ip.nextLong();
            if(check(n)==1) {
                res = n;
            }
            else{
                for (long  i =(long)Math.sqrt(n); i>=2; i--){
                    if(n %  i == 0 && check(i) ==1){

                        res=i;
                        break;
                    }
                }
            }
            System.out.println(res);
        }
    }
}
