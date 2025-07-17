import java.util.Scanner;

public class J03008 {
    public static int[] prime = new int[1000005];
    public static void nto(){
        for (int i=0; i<1000000; i++){
            prime[i]=1;
        }
        prime[1]=prime[0]=0;
        for (int i=2; i<=1000; i++){
            if(prime[i]==1){
                for (int j=i*i; j<=1000000; j+=i){
                    prime[j]=0;
                }
            }
        }
    }
    public static boolean check(String str){
        char[] s= str.toCharArray();
        for (int i=0; i<str.length()/2; i++) {
            if (prime[s[i]-'0'] !=1  ) return false;
            else{
                if(s[i] != s[str.length() - i - 1])
                return false;
            }
        }
        return true;
    }
    public static void main(String[] args) {
        nto();
        Scanner ip= new Scanner(System.in);

        int t=ip.nextInt();
        ip.nextLine();
        while (t-- >0){
            String s= ip.nextLine();
            if(check(s)) System.out.println("YES");
            else System.out.println("NO");
        }


    }
}
