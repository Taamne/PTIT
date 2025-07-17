import java.util.Scanner;

public class J03006 {
    public  static boolean check(String str){
        char[] s= str.toCharArray();
        for (int i=0; i<str.length()/2; i++){
            if((s[i]!=s[str.length()-i-1]) || (s[i]-'0') %2 !=0){
                return false;
            }
        }
        return true;
    }
    public static void main(String[] args) {

        Scanner ip= new Scanner(System.in);
        int t = ip.nextInt();
        ip.nextLine();
        while (t-- >0) {
            String s = ip.nextLine();
            if (check(s)) {
                System.out.println("YES");
            } else System.out.println("NO");
        }
    }
}
