import java.util.Scanner;

public class J01002_TinhTongNSoNguyenDuongDauTien {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int T = input.nextInt();
        for(int i = 1; i<=T; i++){
            long n = input.nextLong();
            long s = 0;
            s+= (n/2) *(n+1) ;

            if(n%2 != 0 ){
                s+= (n+1)/2;

            }

            System.out.println(s);

        }
    }
}
