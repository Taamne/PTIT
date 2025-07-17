import java.util.Scanner;

public class J01024 {
    public static boolean chec(String str){
        char[] s = str.toCharArray();
        for (int i =0; i< s.length; i++){
            if(s[i] != '1' && s[i] != '0' && s[i] != '2'){
                return  false;
            }
        }
        return  true;
    }

    public static void main(String[] args) {
        Scanner ip= new Scanner(System.in);
        int t = ip.nextInt();
        while (t-- >0) {
            String str;
            str = ip.next();
            if (chec(str)) System.out.println("YES");
            else System.out.println("NO");
        }
    }
}
