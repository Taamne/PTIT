import java.util.HashMap;
import java.util.Map;
import java.util.Scanner;

public class J03038 {
    public static void main(String[] args) {
        Scanner ip = new Scanner(System.in);
        String s = ip.nextLine();
        int res=0;
        Map<Character, Integer> map = new HashMap<>();
        for (int i  = 0; i< s.length(); i++){
            if (map.containsKey(s.charAt(i))){
                int cnt = map.get(s.charAt(i));
                map.replace(s.charAt(i), cnt+1);
            }
            else {
                map.put(s.charAt(i), 1);
                res++;
            }
        }
        System.out.println(res);
    }
}
