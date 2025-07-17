import java.util.Scanner;

public class J03026 {
    public static void main(String[] args) {
        Scanner ip = new Scanner(System.in);
        int t = ip.nextInt();
        ip.nextLine();
        while (t-- >0){
            String s1 = ip.nextLine();
            String s2 = ip.nextLine();
            if(s1.equals(s2) ) System.out.println(-1);
            else{
                System.out.println(Math.max(s1.length(), s2.length()));
            }
        }
    }
}
