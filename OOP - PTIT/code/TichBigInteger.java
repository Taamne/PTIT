import java.io.File;
import java.io.FileNotFoundException;
import java.math.BigInteger;
import java.util.Scanner;

public class TichBigInteger
{
    public static void main(String[] args) throws FileNotFoundException {
        File f = new File("TEST.in");
        Scanner ip= new Scanner(f);
        String s ;
        BigInteger res= BigInteger.ONE;
        while (ip.hasNext()){
            s= ip.nextLine();
            BigInteger a =new BigInteger(s);
            res= res.multiply(a);
        }
        System.out.println(res);

    }
}
