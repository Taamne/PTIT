import java.util.Scanner;

public class J03007 {
    public  static boolean check(String str){
        char[] s= str.toCharArray();
        if(s[0]!='8' && s[str.length()-1]!='8') return false;
        int sum=0;
        if (str.length() %2 != 0) sum+=s[str.length()/2]-'0';
        for (int i=0; i<str.length()/2; i++){
            if((s[i]!=s[str.length()-i-1]) ){
                return false;
            }
            else sum+= (s[i] - '0') *2;
        }
        if (sum %10 !=0) return false;
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
