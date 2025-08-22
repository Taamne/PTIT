import java.util.Scanner;
import java.util.Stack;

public class Testt {
    public static void main(String[] args) {
        Scanner ip = new Scanner(System.in);
        int n = ip.nextInt();
        Stack<Integer> stack = new Stack<>();

        for (int i = 0; i < n; i++) {
            int current = ip.nextInt();
            if (!stack.isEmpty()) {
                int top = stack.peek();
                // Check if the sum of the top element and the current element is even
                if ((top + current) % 2 == 0) {
                    stack.pop(); // Remove the top if the sum is even
                } else {
                    stack.push(current); // Otherwise, add the current element
                }
            } else {
                stack.push(current); // Add the first element
            }
        }

        // Output the size of the stack, which represents the number of remaining elements
        System.out.println(stack.size());
    }
}
