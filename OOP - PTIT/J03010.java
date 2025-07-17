import java.util.HashMap;
import java.util.Map;
import java.util.Scanner;

public class J03010 {
    public static void main(String[] args) {
        Scanner ip= new Scanner(System.in);
        int t = ip.nextInt();
        ip.nextLine();
        Map<String, Integer> map = new HashMap<>();
        while (t-- >0){
            String  str= ip.nextLine();
            str= str.trim();
            str= str.toLowerCase();
            str= str.replaceAll("\\s+", " ");
            String[] s= str.split(" ");
            str= s[s.length-1];

            for (int i=0; i<s.length-1;i++ ){
                str +=s[i].charAt(0);
            }
            if(map.containsKey(str)){
                int cnt = map.get(str);
                map.replace(str, cnt+1);
                str+= Integer.toString(cnt+1);

            }
            else map.put(str, 1);


            System.out.println(str+"@ptit.edu.vn");
        }
    }
}
