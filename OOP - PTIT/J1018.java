import java.util.Scanner;

public class J1018 {
    public  static boolean check1(String st){
        char[] s = st.toCharArray();
        for (int i =0; i< s.length-1; i++){
            if(Math.abs(s[i]-s[i+1]) != 2) return false;
        }
        return true;
    }
    public  static boolean check2(String st){
        char[] s = st.toCharArray();
        int sum=0;
        for (int i =0; i< s.length; i++){
            sum+= s[i] - '0';
        }
        if(sum %10==0) return true;
        return  false;
    }
    public static void main(String[] args) {
        Scanner ip = new Scanner(System.in);
        int t = ip.nextInt();
        while (t-- >0){
            String str = ip.next();
            if(check1(str) && check2(str)) System.out.println("YES");
            else System.out.println("NO");
        }
    }
}
