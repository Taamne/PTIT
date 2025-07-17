import java.util.ArrayList;
import java.util.List;
import java.util.Scanner;
import java.util.Stack;

public class J02017 {
    public static void main(String[] args) {
        int[] a = new int[100005];
        Scanner ip = new Scanner(System.in);
        int n = ip.nextInt();
        Stack<Integer> st = new Stack<>();
        for (int i = 0; i < n; i++) {
            int current = ip.nextInt();
            if (st.isEmpty()) {
                st.push(current);
            } else {
                int top = st.peek();
                if ((top + current) % 2 == 0) {
                    st.pop();

                } else st.push(current);
            }

        }
        System.out.println(st.size());

    }
}

