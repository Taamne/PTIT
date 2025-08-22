import java.util.Scanner;

public class J01016 {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        String str = input.next();
        char[] s= str.toCharArray();
        int k=0;
        for(int i = 0; i<s.length; i++){
            if(s[i]=='4' || s[i]=='7') k++;

        }
        if(k==4 || k==7) System.out.println("YES");
        else System.out.println("NO");
    }
}
