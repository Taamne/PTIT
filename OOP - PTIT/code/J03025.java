import java.util.Scanner;

public class J03025 {
    public static void main(String[] args) {
        Scanner ip = new Scanner(System.in);
        int t  = ip.nextInt();
        ip.nextLine();
        while (t-- >0){
            String s = ip.nextLine();

            int cnt=0;
                for (int i=0; i<s.length()/2; i++){
                    if(s.charAt(i) != s.charAt(s.length()-1 -i)) cnt++ ;
                }
                if(cnt ==1 || cnt ==0 && s.length() %2 !=0) System.out.println("YES");
                else System.out.println("NO");

        }
    }
}
