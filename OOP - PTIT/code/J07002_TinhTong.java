import java.io.File;
import java.io.FileNotFoundException;
import java.util.Scanner;

public class J07002_TinhTong {
    public static void main(String[] args) throws FileNotFoundException {
        File f = new File("DATA.in");
        Scanner ip = new Scanner(f);
        long sum=0;
        String s;
        while (ip.hasNext()){
            s = ip.next();
            try{
                sum += Integer.parseInt(s);
            }
            catch (Exception e){};
        }
        System.out.println(sum);

    }
}
