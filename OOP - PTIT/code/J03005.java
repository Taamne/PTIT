import java.util.Scanner;

public class J03005 {
    public static void main(String[] args) {
        Scanner ip= new Scanner(System.in);
        int t = ip.nextInt();
        ip.nextLine();

        while (t-- >0){
            String  str= ip.nextLine();
            str= str.trim();
            str= str.toLowerCase();
            str= str.replaceAll("\\s+", " ");
            String[] s= str.split(" ");
            str= "";
            for (int i=1; i<s.length;i++ ){
                str +=String.valueOf( s[i].charAt(0)).toUpperCase() + s[i].substring(1);
                if(i < s.length-1)
                str+=" ";

            }
            str+= ", ";
            str+= s[0].toUpperCase();
            System.out.println(str);
        }
    }
}
