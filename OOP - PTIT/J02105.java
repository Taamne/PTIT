import java.util.Scanner;

public class J02105 {
    public static void main(String[] args) {
        Scanner ip= new Scanner(System.in);
        int n = ip.nextInt();
        for (int i =0; i<n; i++){
            System.out.printf("List(%d) = ",i+1);
            for (int j =0; j<n; j++){
                int x= ip.nextInt();
                if (x == 1){
                    System.out.print(j+1+" ");
                }

            }
            System.out.println();
        }

    }
}
