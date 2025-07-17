import java.util.Scanner;

public class J01010_CatDoi {
    public static Scanner ip = new Scanner(System.in);
    public static long Test(String str){
        long n=0;

        for(int i =0; i<str.length(); i++){
            char c = str.charAt(i);
            switch (c){
                case '0':
                case '8':
                case '9':
                    n*=10;
                    break;
                case '1':
                    n=n*10 +1;
                    break;
                default:
                    return 0;


            }
        }
        return n;

    }

    public static void main(String[] args) {
        int t = new  Scanner(System.in).nextInt();
        while(t-- >0){
            String str = ip.nextLine();
            long res =Test(str);
            if(res==0) System.out.println("INVALID");
            else
                System.out.println(Test(str));


    }
    }
}
