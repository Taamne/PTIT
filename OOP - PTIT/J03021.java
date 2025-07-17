import java.util.ArrayList;
import java.util.List;
import java.util.Locale;
import java.util.Scanner;
import java.util.logging.SimpleFormatter;

public class J03021 {
    public static boolean check(List<Character> a ){
        for (int i=0; i<a.size()/2; i++){
            if(a.get(i) != a.get(a.size()-1 -i)) return false;
        }
        return  true;
    }
    public static void main(String[] args) {
        Scanner  ip = new Scanner(System.in);
        int t = Integer.parseInt(ip.next());
        while (t-- >0) {
            String s = ip.next();
            List<Character> a = new ArrayList<>();
            s = s.toUpperCase();
            for (int i = 0; i < s.length(); i++) {
                if (s.charAt(i) == 'A' || s.charAt(i) == 'B' || s.charAt(i) == 'C') a.add('2');
                else if (s.charAt(i) == 'D' || s.charAt(i) == 'E' || s.charAt(i) == 'F') a.add('3');
                else if (s.charAt(i) == 'G' || s.charAt(i) == 'H' || s.charAt(i) == 'I') a.add('4');
                else if (s.charAt(i) == 'J' || s.charAt(i) == 'K' || s.charAt(i) == 'L') a.add('5');
                else if (s.charAt(i) == 'M' || s.charAt(i) == 'N' || s.charAt(i) == 'O') a.add('6');
                else if (s.charAt(i) == 'P' || s.charAt(i) == 'Q' || s.charAt(i) == 'R' || s.charAt(i) == 'S')
                    a.add('7');
                else if (s.charAt(i) == 'T' || s.charAt(i) == 'U' || s.charAt(i) == 'V') a.add('8');
                else if (s.charAt(i) == 'W' || s.charAt(i) == 'X' || s.charAt(i) == 'Y' || s.charAt(i) == 'Z')
                    a.add('9');
            }

//        for (int i =0; i< a.size(); i++) System.out.println(a.get(i));
            if (check(a)) System.out.println("YES");
            else System.out.println("NO");
        }
    }
}
