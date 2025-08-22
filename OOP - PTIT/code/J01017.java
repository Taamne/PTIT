import java.util.Scanner;

public class J01017 {
    public  static boolean check(String st){
        char[] s = st.toCharArray();
        for (int i =0; i< s.length-1; i++){
            if(Math.abs(s[i]-s[i+1]) != 1) return false;
        }
        return true;
    }
    public static void main(String[] args) {
        Scanner ip = new Scanner(System.in);
        int t = ip.nextInt();
        while (t-- >0){
            String str = ip.next();
            if(check(str)) System.out.println("YES");
            else System.out.println("NO");
        }
    }
}
