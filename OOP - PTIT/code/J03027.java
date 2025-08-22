import java.util.Scanner;
import java.util.Stack;

public class J03027 {
    public static void main(String[] args) {
        Scanner ip = new Scanner(System.in);
        String s = ip.nextLine();
        Stack<Character> st = new Stack<>();
        for (int i =0; i< s.length(); i++){
            if(st.isEmpty()){
                st.push(s.charAt(i));
            }
            else{
                if(st.peek() == s.charAt(i)) st.pop();
                else st.push(s.charAt(i));
            }
        }
        if (st.isEmpty()) System.out.println("Empty String");
        else
        for (Character i : st) System.out.print(i);
    }
}
