import java.util.Queue;
import java.util.Scanner;

public class J03032 {
    public static void main(String[] args) {
        Scanner ip = new Scanner(System.in);
        int t =ip.nextInt();
        ip.nextLine();

        while (t-- >0){
            String str = ip.nextLine();
            str= str.replaceAll("\\s+", " ");
            String[] s = str.split(" ");
            for (int  i=0; i<s.length; i++){
                StringBuilder tmp = new StringBuilder(s[i]);
                System.out.print(tmp.reverse() + " ");

                }
            System.out.println();
            }
        }
    }

