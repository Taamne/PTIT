package J04001;

import java.util.Scanner;

public class J04001 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        while(t-- > 0){
            point p1 = new point(sc.nextDouble(), sc.nextDouble());
            point p2 = new point(sc.nextDouble(), sc.nextDouble());
            System.out.println(p1.toString(p2));
        }
    }
}

