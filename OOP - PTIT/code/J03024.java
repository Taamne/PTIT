import java.util.*;

public class J03024 {
    public static void main(String[] args) {
        Scanner ip = new Scanner(System.in);
        int t = ip.nextInt();
        ip.nextLine();
        while (t-- >0){

            String s= ip.nextLine();
            int cnt1=0, cnt2 =0;
            boolean check = true;
            for (int i=0; i< s.length(); i++ ){
                if (s.charAt(i) >'9' || s.charAt(i) < '0') {
                    check =false;
                    break;
                }
                if ( (s.charAt(i) -'0') %2 ==0 )  cnt2 ++;
                else cnt1++;
            }
            if (check == false) System.out.println("INVALID");
            else {
                if (cnt1 > cnt2 && s.length() % 2 != 0) System.out.println("YES");
                else if (cnt1 < cnt2 && s.length() % 2 == 0) System.out.println("YES");
                else System.out.println("NO");
            }
        }
    }
}
